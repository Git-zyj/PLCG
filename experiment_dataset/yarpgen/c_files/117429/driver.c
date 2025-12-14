#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14246190789539885744ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)46567;
int zero = 0;
short var_19 = (short)-5648;
unsigned char var_20 = (unsigned char)25;
void init() {
}

void checksum() {
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
