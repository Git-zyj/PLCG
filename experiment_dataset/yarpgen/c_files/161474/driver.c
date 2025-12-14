#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8325191127686152785ULL;
signed char var_3 = (signed char)-120;
unsigned long long int var_4 = 16021336942746268143ULL;
unsigned long long int var_5 = 7466587712870727426ULL;
int var_6 = -811014210;
unsigned int var_7 = 3532929964U;
unsigned int var_8 = 2705452570U;
short var_10 = (short)-12765;
int zero = 0;
unsigned int var_12 = 2792508943U;
int var_13 = -919290349;
long long int var_14 = 6413586892950297421LL;
long long int var_15 = -8856564254134852248LL;
long long int var_16 = 7768698416326980464LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
