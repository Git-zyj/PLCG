#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3371329404369473351ULL;
unsigned char var_1 = (unsigned char)236;
int var_13 = -746988933;
unsigned char var_14 = (unsigned char)157;
unsigned short var_17 = (unsigned short)33879;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)20636;
unsigned short var_20 = (unsigned short)11054;
unsigned long long int var_21 = 16660986039096162192ULL;
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
