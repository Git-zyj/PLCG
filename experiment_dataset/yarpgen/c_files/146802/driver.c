#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 9106209056394020393LL;
short var_16 = (short)-14481;
int zero = 0;
unsigned long long int var_18 = 6034412015328795740ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
