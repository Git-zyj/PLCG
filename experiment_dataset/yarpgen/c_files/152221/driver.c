#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)82;
unsigned long long int var_7 = 11159169644025978000ULL;
unsigned short var_11 = (unsigned short)55361;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1112009999U;
void init() {
}

void checksum() {
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
