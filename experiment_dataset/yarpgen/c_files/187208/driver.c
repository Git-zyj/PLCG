#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-15;
long long int var_6 = -6226879891059059115LL;
unsigned short var_9 = (unsigned short)54115;
unsigned short var_12 = (unsigned short)21058;
int var_15 = 1452862676;
int zero = 0;
long long int var_16 = 8620165189883494200LL;
int var_17 = 699955464;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
