#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
unsigned short var_3 = (unsigned short)30897;
unsigned int var_14 = 1182601404U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8760574101776727207ULL;
unsigned char var_21 = (unsigned char)150;
void init() {
}

void checksum() {
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
