#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 11255526499677041408ULL;
int var_9 = -1655137309;
unsigned long long int var_11 = 10520762124788166012ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)106;
int zero = 0;
unsigned int var_16 = 369425020U;
unsigned long long int var_17 = 10487708633829495344ULL;
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
