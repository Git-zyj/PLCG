#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3317529696U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7626523565848661298LL;
unsigned long long int var_5 = 8107647893442488486ULL;
int var_6 = -962982176;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -2177428572706127048LL;
short var_16 = (short)-10930;
int var_17 = 1150539669;
long long int var_18 = 1007905346587744018LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
