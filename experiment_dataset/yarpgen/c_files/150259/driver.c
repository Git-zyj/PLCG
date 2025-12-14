#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)41;
signed char var_4 = (signed char)-85;
signed char var_5 = (signed char)39;
unsigned int var_11 = 2832196733U;
unsigned char var_13 = (unsigned char)90;
unsigned char var_17 = (unsigned char)90;
unsigned short var_18 = (unsigned short)47184;
int zero = 0;
short var_19 = (short)-1758;
unsigned int var_20 = 2162991374U;
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
