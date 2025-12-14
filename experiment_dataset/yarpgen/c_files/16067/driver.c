#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 441802911;
signed char var_4 = (signed char)-36;
unsigned long long int var_5 = 17572204609786783326ULL;
long long int var_7 = -1795520974749128625LL;
unsigned long long int var_9 = 661811745444234937ULL;
unsigned long long int var_11 = 10807181909620885215ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 5744747411373426699ULL;
int zero = 0;
unsigned long long int var_16 = 4336261946389723390ULL;
signed char var_17 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
