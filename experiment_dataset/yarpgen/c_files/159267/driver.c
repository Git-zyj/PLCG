#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6510391363929614619ULL;
signed char var_7 = (signed char)-43;
short var_10 = (short)4961;
unsigned long long int var_15 = 17541930840379666034ULL;
signed char var_16 = (signed char)-63;
int zero = 0;
unsigned char var_19 = (unsigned char)54;
long long int var_20 = -1727530316174706116LL;
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
