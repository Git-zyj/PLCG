#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1724497644;
unsigned short var_2 = (unsigned short)22289;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3388181186758046792LL;
unsigned int var_9 = 568195081U;
int zero = 0;
unsigned short var_15 = (unsigned short)50376;
long long int var_16 = -5739593123974586843LL;
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
