#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)126;
unsigned int var_7 = 181936986U;
unsigned short var_12 = (unsigned short)58709;
unsigned char var_16 = (unsigned char)220;
int zero = 0;
unsigned short var_17 = (unsigned short)60413;
int var_18 = 1927043839;
int var_19 = -723578110;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
