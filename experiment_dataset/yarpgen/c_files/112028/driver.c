#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -547646486587147702LL;
_Bool var_5 = (_Bool)0;
long long int var_8 = -5148719908556586189LL;
long long int var_11 = -6127055882323831938LL;
short var_18 = (short)-2013;
int zero = 0;
unsigned short var_19 = (unsigned short)25347;
unsigned long long int var_20 = 6169596105156959210ULL;
unsigned short var_21 = (unsigned short)59207;
_Bool var_22 = (_Bool)0;
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
