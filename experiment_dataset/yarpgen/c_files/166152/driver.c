#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -220297269;
unsigned char var_3 = (unsigned char)123;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)8;
unsigned char var_13 = (unsigned char)111;
int zero = 0;
int var_15 = 959467022;
short var_16 = (short)-28923;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
