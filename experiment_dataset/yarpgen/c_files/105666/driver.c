#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43530;
unsigned int var_3 = 2685475486U;
long long int var_7 = -5977600031073630635LL;
signed char var_8 = (signed char)55;
signed char var_11 = (signed char)-43;
int zero = 0;
unsigned long long int var_14 = 10041413046646537477ULL;
unsigned int var_15 = 1637954890U;
int var_16 = -1335587108;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
