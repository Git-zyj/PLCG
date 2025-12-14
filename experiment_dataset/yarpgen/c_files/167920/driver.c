#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1274634;
unsigned long long int var_5 = 8625627834585211671ULL;
unsigned long long int var_14 = 9522746585671745820ULL;
unsigned short var_16 = (unsigned short)908;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)5179;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
