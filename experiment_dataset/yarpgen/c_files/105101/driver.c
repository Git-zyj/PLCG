#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 131129386U;
unsigned short var_11 = (unsigned short)52308;
int zero = 0;
unsigned long long int var_18 = 188580330002784264ULL;
short var_19 = (short)28780;
short var_20 = (short)-28319;
unsigned short var_21 = (unsigned short)64276;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
