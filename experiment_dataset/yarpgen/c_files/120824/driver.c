#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8395400977614079123ULL;
unsigned short var_7 = (unsigned short)59962;
unsigned long long int var_8 = 7558600084186347882ULL;
long long int var_11 = 4271169282283935937LL;
int var_12 = 612170709;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-126;
void init() {
}

void checksum() {
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
