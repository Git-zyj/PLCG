#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 757844954U;
unsigned int var_13 = 3898255198U;
unsigned long long int var_14 = 15329117174859783897ULL;
long long int var_16 = -9077498845153940733LL;
int zero = 0;
short var_17 = (short)-21184;
unsigned long long int var_18 = 4465197782351224246ULL;
unsigned long long int var_19 = 12113641502056195076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
