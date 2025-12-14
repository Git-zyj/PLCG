#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8391064105092945278ULL;
unsigned long long int var_6 = 11122674850620694331ULL;
unsigned int var_7 = 1760177981U;
long long int var_9 = -2268750428736491318LL;
unsigned int var_11 = 3847653715U;
unsigned int var_13 = 2884689016U;
int var_14 = -708503526;
int zero = 0;
unsigned int var_17 = 3230093490U;
unsigned int var_18 = 3079742935U;
unsigned short var_19 = (unsigned short)38699;
long long int var_20 = 844750499850360158LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
