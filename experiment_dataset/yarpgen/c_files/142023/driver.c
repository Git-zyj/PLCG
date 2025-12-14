#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28350;
signed char var_1 = (signed char)-10;
short var_3 = (short)-4546;
signed char var_4 = (signed char)44;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 9813860643687527553ULL;
int zero = 0;
signed char var_10 = (signed char)105;
unsigned char var_11 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
