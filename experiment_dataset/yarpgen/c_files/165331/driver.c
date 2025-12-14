#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19366;
short var_2 = (short)-19252;
short var_4 = (short)-30809;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 15447440679761400816ULL;
int zero = 0;
unsigned long long int var_10 = 14379561565855770365ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)53623;
unsigned long long int var_13 = 13063329973788774001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
