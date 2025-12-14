#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3239856829U;
long long int var_4 = -2848877783083567598LL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)46648;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
int var_13 = 1023206964;
unsigned short var_14 = (unsigned short)5389;
signed char var_15 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
