#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2036814668U;
unsigned long long int var_4 = 12022774308231538688ULL;
unsigned int var_5 = 2747652762U;
unsigned int var_7 = 704254199U;
unsigned char var_9 = (unsigned char)42;
unsigned int var_10 = 597461656U;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)18;
unsigned short var_15 = (unsigned short)63912;
unsigned short var_16 = (unsigned short)61278;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
