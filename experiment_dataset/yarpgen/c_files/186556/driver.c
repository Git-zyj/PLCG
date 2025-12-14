#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-1143;
unsigned int var_14 = 2740313556U;
unsigned long long int var_16 = 3011961242590909536ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)372;
unsigned long long int var_19 = 4408156366005737465ULL;
unsigned char var_20 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
