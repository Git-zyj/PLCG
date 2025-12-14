#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1386841410U;
long long int var_4 = 4904748694556589454LL;
unsigned int var_5 = 3608797953U;
signed char var_6 = (signed char)17;
unsigned long long int var_8 = 7099592563405280746ULL;
int zero = 0;
int var_14 = -98584672;
unsigned long long int var_15 = 6629992815320844870ULL;
int var_16 = -1419678102;
long long int var_17 = -4921813055964565951LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
