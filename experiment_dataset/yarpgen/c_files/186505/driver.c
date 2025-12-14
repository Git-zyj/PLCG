#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8679486636739703300LL;
signed char var_10 = (signed char)64;
_Bool var_12 = (_Bool)1;
int var_13 = 1498074742;
int zero = 0;
unsigned short var_17 = (unsigned short)58536;
long long int var_18 = 3385048611062240825LL;
void init() {
}

void checksum() {
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
