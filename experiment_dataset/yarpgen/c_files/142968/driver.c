#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)13;
short var_6 = (short)4425;
_Bool var_8 = (_Bool)0;
long long int var_12 = 9188386749874576320LL;
unsigned short var_14 = (unsigned short)33998;
int zero = 0;
int var_16 = 2123559458;
short var_17 = (short)21114;
long long int var_18 = 3039892394135805304LL;
void init() {
}

void checksum() {
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
