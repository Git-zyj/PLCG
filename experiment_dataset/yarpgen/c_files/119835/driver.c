#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11444247096464620342ULL;
signed char var_1 = (signed char)54;
signed char var_3 = (signed char)-127;
signed char var_4 = (signed char)-93;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17455361002038486001ULL;
unsigned int var_11 = 2894970231U;
int zero = 0;
unsigned int var_13 = 1437622788U;
unsigned char var_14 = (unsigned char)51;
unsigned long long int var_15 = 10926573067241166160ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
