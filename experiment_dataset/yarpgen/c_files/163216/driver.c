#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1453966946;
int var_2 = -739132265;
short var_8 = (short)-5513;
unsigned long long int var_9 = 7258775919723461895ULL;
unsigned long long int var_12 = 12979087675329419660ULL;
int zero = 0;
unsigned int var_13 = 3072611127U;
short var_14 = (short)-10637;
unsigned int var_15 = 3966044462U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
