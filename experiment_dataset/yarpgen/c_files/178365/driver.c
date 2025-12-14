#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27845;
long long int var_3 = 6310376540522824201LL;
unsigned int var_4 = 960368238U;
unsigned int var_6 = 3115357474U;
signed char var_7 = (signed char)-87;
unsigned char var_8 = (unsigned char)240;
signed char var_9 = (signed char)36;
unsigned short var_10 = (unsigned short)9219;
unsigned short var_11 = (unsigned short)42434;
unsigned int var_12 = 1650035859U;
unsigned char var_13 = (unsigned char)4;
long long int var_16 = 6375237723382742804LL;
unsigned char var_17 = (unsigned char)196;
short var_18 = (short)12345;
int zero = 0;
unsigned long long int var_19 = 6520284319386485795ULL;
unsigned long long int var_20 = 5917712005749319581ULL;
int var_21 = 1852033925;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2519285539080448345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
