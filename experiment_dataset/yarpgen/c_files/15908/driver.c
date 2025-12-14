#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)64;
unsigned short var_3 = (unsigned short)47702;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)49173;
long long int var_6 = 8872720874609715305LL;
unsigned long long int var_9 = 7835376583831714537ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
unsigned char var_13 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
