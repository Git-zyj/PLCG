#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)27664;
signed char var_2 = (signed char)88;
signed char var_4 = (signed char)122;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)58;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)5367;
long long int var_12 = 5061503293764712458LL;
long long int var_13 = 8113825496456699139LL;
signed char var_14 = (signed char)21;
unsigned char var_15 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
