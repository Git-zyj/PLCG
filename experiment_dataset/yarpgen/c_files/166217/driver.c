#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4098926766U;
unsigned short var_5 = (unsigned short)49713;
unsigned short var_7 = (unsigned short)18233;
unsigned short var_9 = (unsigned short)63334;
_Bool var_10 = (_Bool)0;
short var_13 = (short)14786;
int zero = 0;
long long int var_14 = -6590201256902778290LL;
int var_15 = -1501977100;
long long int var_16 = 7358961873375019101LL;
signed char var_17 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
