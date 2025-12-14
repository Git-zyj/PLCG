#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-8;
_Bool var_3 = (_Bool)0;
short var_5 = (short)7488;
unsigned char var_8 = (unsigned char)162;
unsigned int var_10 = 2260090879U;
unsigned int var_11 = 485955546U;
signed char var_12 = (signed char)68;
unsigned short var_15 = (unsigned short)6273;
int var_16 = -1260877857;
int zero = 0;
unsigned long long int var_18 = 15825343779763445721ULL;
short var_19 = (short)-10259;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9677715521459644872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
