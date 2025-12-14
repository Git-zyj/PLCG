#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
int var_3 = 1372422955;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)85;
int zero = 0;
signed char var_15 = (signed char)40;
long long int var_16 = -4403573367340708883LL;
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
