#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned int var_2 = 3387750593U;
unsigned long long int var_3 = 2730284452424393000ULL;
unsigned int var_12 = 3110679803U;
int zero = 0;
unsigned int var_15 = 3212726165U;
unsigned long long int var_16 = 2436559996722457126ULL;
unsigned long long int var_17 = 9339191332195316163ULL;
short var_18 = (short)-26886;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
