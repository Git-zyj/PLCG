#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
signed char var_2 = (signed char)-75;
unsigned short var_3 = (unsigned short)63409;
long long int var_6 = -1994943137050570925LL;
unsigned short var_7 = (unsigned short)1131;
unsigned short var_9 = (unsigned short)58708;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5115621709843569118LL;
unsigned int var_12 = 2269423U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
