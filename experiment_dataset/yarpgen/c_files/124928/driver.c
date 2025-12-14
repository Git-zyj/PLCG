#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-56;
unsigned long long int var_6 = 13836554152519001413ULL;
long long int var_9 = 5063214519433626586LL;
unsigned char var_10 = (unsigned char)64;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-110;
long long int var_17 = 6681340968733032182LL;
unsigned short var_18 = (unsigned short)40949;
int zero = 0;
short var_19 = (short)-26911;
long long int var_20 = -6835624070897045480LL;
long long int var_21 = -7723755232109122702LL;
unsigned long long int var_22 = 12833049830320677662ULL;
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
