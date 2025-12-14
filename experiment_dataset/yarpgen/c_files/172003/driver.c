#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1108497844;
_Bool var_8 = (_Bool)1;
unsigned long long int var_16 = 434839833541402526ULL;
int zero = 0;
int var_20 = 293147191;
unsigned char var_21 = (unsigned char)211;
unsigned short var_22 = (unsigned short)35743;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
