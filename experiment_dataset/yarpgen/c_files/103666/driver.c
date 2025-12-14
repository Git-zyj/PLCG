#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2396978617676374895LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 18157808245091689738ULL;
unsigned char var_8 = (unsigned char)90;
int zero = 0;
unsigned short var_13 = (unsigned short)44403;
signed char var_14 = (signed char)-28;
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
