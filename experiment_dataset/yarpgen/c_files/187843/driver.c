#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned char var_1 = (unsigned char)137;
signed char var_2 = (signed char)42;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_9 = 617933687;
int zero = 0;
int var_15 = 313344097;
unsigned long long int var_16 = 16135455284011347087ULL;
unsigned char var_17 = (unsigned char)180;
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
