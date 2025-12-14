#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5050741806594509868LL;
signed char var_7 = (signed char)110;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)55;
unsigned short var_20 = (unsigned short)24434;
void init() {
}

void checksum() {
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
