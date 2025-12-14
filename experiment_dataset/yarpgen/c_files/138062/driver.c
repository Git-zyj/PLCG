#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5792104927151120049LL;
int var_1 = -699807340;
unsigned short var_8 = (unsigned short)12292;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2368313717U;
int var_16 = -826752695;
unsigned char var_17 = (unsigned char)236;
unsigned short var_18 = (unsigned short)63594;
int zero = 0;
unsigned short var_20 = (unsigned short)1110;
unsigned int var_21 = 4146582441U;
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
