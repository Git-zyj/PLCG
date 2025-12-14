#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3799768562019302822LL;
unsigned char var_5 = (unsigned char)128;
long long int var_9 = 8202876972469543912LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7561791394553187915LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
