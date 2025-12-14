#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53458;
unsigned int var_2 = 1351870952U;
short var_3 = (short)-592;
short var_6 = (short)-19847;
int zero = 0;
unsigned short var_10 = (unsigned short)59795;
unsigned int var_11 = 1809138487U;
int var_12 = 942081895;
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
