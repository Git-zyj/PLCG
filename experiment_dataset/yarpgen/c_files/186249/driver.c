#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
short var_5 = (short)-1175;
unsigned long long int var_7 = 1519386423156964562ULL;
int var_9 = -957411903;
unsigned short var_13 = (unsigned short)20125;
unsigned int var_15 = 51518313U;
int zero = 0;
unsigned char var_17 = (unsigned char)173;
unsigned char var_18 = (unsigned char)92;
unsigned int var_19 = 2545803512U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
