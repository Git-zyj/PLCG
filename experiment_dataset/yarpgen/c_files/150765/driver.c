#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1796084102U;
unsigned int var_1 = 3266473359U;
unsigned long long int var_2 = 7692265602830629897ULL;
unsigned int var_3 = 2644872680U;
unsigned int var_6 = 1041879801U;
unsigned int var_7 = 362141570U;
unsigned long long int var_8 = 3641922972885667379ULL;
unsigned int var_9 = 2713673566U;
int zero = 0;
unsigned int var_10 = 3042201041U;
unsigned long long int var_11 = 7812200025467237996ULL;
unsigned long long int var_12 = 13228572791535593489ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
