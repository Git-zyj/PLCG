#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)927;
long long int var_10 = -1423990049252773520LL;
short var_12 = (short)12185;
unsigned int var_13 = 2194501165U;
int zero = 0;
long long int var_15 = -7184949010185974895LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 219527668U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
