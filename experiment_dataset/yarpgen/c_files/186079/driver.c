#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 855040907U;
signed char var_5 = (signed char)-21;
short var_7 = (short)-6206;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_14 = 5413726390923153672LL;
unsigned int var_15 = 2113982152U;
short var_16 = (short)21301;
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
