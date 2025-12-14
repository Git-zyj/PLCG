#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3399;
unsigned int var_1 = 2225554805U;
unsigned long long int var_3 = 12726177904117596064ULL;
unsigned int var_8 = 3292496150U;
unsigned int var_9 = 3970103606U;
unsigned int var_10 = 1393294119U;
int zero = 0;
unsigned long long int var_12 = 13522341696432863437ULL;
unsigned long long int var_13 = 13201196643230517818ULL;
unsigned int var_14 = 2352066282U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
