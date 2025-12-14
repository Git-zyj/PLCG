#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12631;
unsigned char var_3 = (unsigned char)239;
unsigned long long int var_7 = 1505696331189726802ULL;
long long int var_10 = 3522255216221822660LL;
signed char var_11 = (signed char)126;
int zero = 0;
unsigned short var_14 = (unsigned short)61489;
_Bool var_15 = (_Bool)1;
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
