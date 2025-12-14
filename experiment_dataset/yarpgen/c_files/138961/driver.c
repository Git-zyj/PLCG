#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1583570027781073084ULL;
unsigned long long int var_4 = 16428276281715847948ULL;
unsigned long long int var_5 = 15713467197895530446ULL;
unsigned long long int var_9 = 15433340233699457176ULL;
unsigned long long int var_10 = 1089278857788367546ULL;
unsigned long long int var_13 = 10229937412730908358ULL;
int zero = 0;
short var_14 = (short)-31151;
short var_15 = (short)-19266;
short var_16 = (short)14328;
short var_17 = (short)23170;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
