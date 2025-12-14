#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 690567534U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 9178561553729908904ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2805790339U;
int zero = 0;
unsigned int var_19 = 2611295843U;
unsigned int var_20 = 1890276494U;
void init() {
}

void checksum() {
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
