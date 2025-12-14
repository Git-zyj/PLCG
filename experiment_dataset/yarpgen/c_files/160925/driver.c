#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 482125555U;
unsigned char var_1 = (unsigned char)111;
unsigned int var_3 = 1505747602U;
long long int var_4 = -7084236697643881274LL;
long long int var_6 = -6673774689446108264LL;
unsigned long long int var_7 = 3743120621071858277ULL;
unsigned char var_9 = (unsigned char)64;
int zero = 0;
short var_10 = (short)-7097;
unsigned long long int var_11 = 1202847896372772943ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3099572649589428427LL;
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
