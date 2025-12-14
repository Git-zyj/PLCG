#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned char var_5 = (unsigned char)91;
unsigned long long int var_7 = 2767828893407241745ULL;
unsigned char var_8 = (unsigned char)122;
unsigned long long int var_10 = 10534878525237734665ULL;
int var_11 = 42089183;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)89;
int var_15 = 802007438;
long long int var_17 = 9079108193829524182LL;
short var_18 = (short)3606;
int zero = 0;
long long int var_19 = -4884347158852516365LL;
unsigned char var_20 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
