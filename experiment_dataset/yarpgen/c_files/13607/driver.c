#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19070;
unsigned long long int var_1 = 6925890894767780544ULL;
unsigned short var_2 = (unsigned short)9567;
signed char var_4 = (signed char)83;
unsigned long long int var_8 = 2019549697099973041ULL;
int var_13 = 911847264;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 22014330311728327LL;
unsigned short var_16 = (unsigned short)7847;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
