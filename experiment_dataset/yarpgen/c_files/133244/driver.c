#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 9525396963920569635ULL;
unsigned int var_15 = 3437936782U;
signed char var_17 = (signed char)-51;
unsigned int var_19 = 273210285U;
int zero = 0;
signed char var_20 = (signed char)123;
unsigned long long int var_21 = 1375026603505396441ULL;
void init() {
}

void checksum() {
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
