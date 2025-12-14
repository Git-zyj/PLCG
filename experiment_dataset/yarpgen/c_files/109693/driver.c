#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8401661172134568195LL;
unsigned short var_3 = (unsigned short)64452;
unsigned int var_4 = 1056138199U;
unsigned char var_6 = (unsigned char)105;
unsigned short var_10 = (unsigned short)51607;
int zero = 0;
int var_11 = 367126613;
long long int var_12 = -590367754254096355LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
