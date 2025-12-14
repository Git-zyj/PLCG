#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
_Bool var_2 = (_Bool)1;
int var_5 = 171664757;
int zero = 0;
unsigned long long int var_16 = 3324004049657908352ULL;
unsigned short var_17 = (unsigned short)51608;
unsigned char var_18 = (unsigned char)78;
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
