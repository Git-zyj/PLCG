#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49523;
unsigned int var_4 = 2952921942U;
unsigned long long int var_5 = 9132840276628513474ULL;
signed char var_6 = (signed char)-61;
unsigned char var_7 = (unsigned char)143;
unsigned char var_11 = (unsigned char)159;
unsigned char var_12 = (unsigned char)47;
signed char var_13 = (signed char)-11;
short var_14 = (short)-25513;
_Bool var_15 = (_Bool)1;
long long int var_18 = -5329308930964145000LL;
int zero = 0;
int var_19 = -1563738556;
signed char var_20 = (signed char)-91;
unsigned short var_21 = (unsigned short)7384;
unsigned long long int var_22 = 15805097818122115003ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
