#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_7 = -7802494540044938871LL;
unsigned char var_9 = (unsigned char)70;
unsigned char var_12 = (unsigned char)228;
signed char var_13 = (signed char)-9;
short var_14 = (short)16393;
int zero = 0;
unsigned long long int var_15 = 6676268971137937326ULL;
unsigned char var_16 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
