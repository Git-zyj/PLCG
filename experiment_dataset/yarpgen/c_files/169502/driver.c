#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)165;
unsigned char var_3 = (unsigned char)192;
signed char var_5 = (signed char)9;
unsigned int var_6 = 3057219548U;
signed char var_7 = (signed char)-96;
int zero = 0;
unsigned long long int var_11 = 16493654313704615144ULL;
unsigned int var_12 = 3754651865U;
void init() {
}

void checksum() {
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
