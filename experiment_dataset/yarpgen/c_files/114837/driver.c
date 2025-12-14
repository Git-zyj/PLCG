#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32765;
_Bool var_1 = (_Bool)0;
int var_2 = -1570673927;
unsigned char var_3 = (unsigned char)252;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3126202957U;
short var_6 = (short)7634;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16847883754919382932ULL;
signed char var_9 = (signed char)-41;
long long int var_10 = -3449723039138496189LL;
int zero = 0;
unsigned short var_11 = (unsigned short)61013;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2078060287U;
int var_14 = -344867111;
int var_15 = -1104587901;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
