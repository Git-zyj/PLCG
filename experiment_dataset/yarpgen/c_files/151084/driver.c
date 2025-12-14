#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6265548509271228408LL;
unsigned char var_3 = (unsigned char)15;
unsigned long long int var_4 = 2299488592643461683ULL;
int var_12 = -1305396624;
int zero = 0;
unsigned short var_13 = (unsigned short)57925;
_Bool var_14 = (_Bool)1;
int var_15 = -59855590;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
