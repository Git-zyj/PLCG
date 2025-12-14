#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24570;
long long int var_3 = 4827798768115871735LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = -5539665157001343974LL;
signed char var_9 = (signed char)-7;
int zero = 0;
unsigned short var_12 = (unsigned short)2356;
_Bool var_13 = (_Bool)0;
long long int var_14 = -702740455742131933LL;
unsigned char var_15 = (unsigned char)60;
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
