#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22421;
signed char var_4 = (signed char)-85;
unsigned char var_9 = (unsigned char)23;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 17575277077433038895ULL;
long long int var_19 = -2235903715027408362LL;
long long int var_20 = 8556732473595032241LL;
signed char var_21 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
