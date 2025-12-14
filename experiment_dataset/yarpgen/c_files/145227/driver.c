#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5794079311504602793LL;
unsigned char var_2 = (unsigned char)242;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3658193685U;
long long int var_7 = 6784139555332557320LL;
unsigned short var_9 = (unsigned short)22486;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)159;
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
