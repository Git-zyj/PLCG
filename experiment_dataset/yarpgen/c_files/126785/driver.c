#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 144401977957856949ULL;
long long int var_4 = 8267995494313009336LL;
short var_5 = (short)-19205;
long long int var_6 = 3208534524096267647LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16057152459756781595ULL;
int zero = 0;
unsigned long long int var_12 = 10695095860051121015ULL;
unsigned int var_13 = 836450244U;
long long int var_14 = 7702710744929411486LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
