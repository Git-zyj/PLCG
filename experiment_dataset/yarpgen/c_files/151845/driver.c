#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46674;
unsigned long long int var_7 = 3721365918151714610ULL;
signed char var_8 = (signed char)22;
unsigned long long int var_16 = 18026618950946185033ULL;
int var_18 = 1882037447;
int zero = 0;
signed char var_20 = (signed char)115;
long long int var_21 = -6670839692133543841LL;
unsigned short var_22 = (unsigned short)34671;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
