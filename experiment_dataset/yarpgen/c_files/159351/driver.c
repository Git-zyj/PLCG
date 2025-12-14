#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21703;
long long int var_12 = 5663107102699988063LL;
long long int var_14 = 601581529930092257LL;
long long int var_17 = 8821126635470378971LL;
int zero = 0;
unsigned short var_20 = (unsigned short)38293;
unsigned char var_21 = (unsigned char)156;
void init() {
}

void checksum() {
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
