#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28514;
unsigned long long int var_2 = 7563282806225297494ULL;
int var_6 = -355425503;
signed char var_7 = (signed char)96;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)136;
unsigned char var_13 = (unsigned char)228;
int zero = 0;
signed char var_15 = (signed char)-66;
unsigned char var_16 = (unsigned char)219;
short var_17 = (short)23763;
short var_18 = (short)-6684;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
