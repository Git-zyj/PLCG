#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10345832357299581054ULL;
unsigned long long int var_5 = 4125223510548658524ULL;
short var_6 = (short)-7394;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)150;
int zero = 0;
long long int var_18 = -8533226668905422244LL;
long long int var_19 = 181888392714884521LL;
_Bool var_20 = (_Bool)0;
int var_21 = 504337971;
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
