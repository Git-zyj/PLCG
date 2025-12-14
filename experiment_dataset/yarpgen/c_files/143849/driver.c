#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3385594012U;
signed char var_6 = (signed char)-5;
signed char var_12 = (signed char)38;
int zero = 0;
unsigned int var_19 = 3031203557U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)39;
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
