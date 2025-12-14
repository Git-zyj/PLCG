#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 766545175U;
unsigned long long int var_6 = 2892939461705491233ULL;
unsigned char var_7 = (unsigned char)250;
short var_9 = (short)23275;
unsigned int var_12 = 2675814907U;
unsigned long long int var_13 = 4223901100339629300ULL;
int zero = 0;
short var_14 = (short)-21097;
int var_15 = -303859918;
void init() {
}

void checksum() {
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
