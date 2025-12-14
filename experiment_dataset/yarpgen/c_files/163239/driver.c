#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2636966200153782236ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)16827;
signed char var_13 = (signed char)-45;
signed char var_15 = (signed char)-111;
int zero = 0;
long long int var_16 = 2091287949955716103LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)27343;
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
