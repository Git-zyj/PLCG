#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6045215360657975941LL;
unsigned char var_2 = (unsigned char)21;
signed char var_6 = (signed char)27;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-9787;
int var_10 = 980975789;
unsigned short var_14 = (unsigned short)9749;
unsigned long long int var_15 = 12738987200172910543ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)21043;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
