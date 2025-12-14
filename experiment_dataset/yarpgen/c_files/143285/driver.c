#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59779;
long long int var_1 = 5078988206060166855LL;
short var_6 = (short)23064;
unsigned int var_8 = 3507423867U;
long long int var_10 = -5407939524953800292LL;
short var_11 = (short)25485;
int zero = 0;
unsigned long long int var_12 = 17167536301792558703ULL;
unsigned int var_13 = 3877933805U;
signed char var_14 = (signed char)91;
unsigned short var_15 = (unsigned short)29015;
_Bool var_16 = (_Bool)0;
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
