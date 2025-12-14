#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2758852230U;
long long int var_5 = -1455648874728995097LL;
unsigned long long int var_8 = 3895644659543761321ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 15405416881751370910ULL;
signed char var_13 = (signed char)-101;
int zero = 0;
signed char var_15 = (signed char)-80;
_Bool var_16 = (_Bool)1;
short var_17 = (short)13125;
void init() {
}

void checksum() {
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
