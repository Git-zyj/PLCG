#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
long long int var_2 = 7470659557488131540LL;
unsigned char var_4 = (unsigned char)230;
short var_6 = (short)-29113;
unsigned long long int var_7 = 1575001063602237541ULL;
unsigned char var_8 = (unsigned char)123;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)23802;
int zero = 0;
unsigned short var_11 = (unsigned short)12853;
short var_12 = (short)-31577;
int var_13 = 133517525;
signed char var_14 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
