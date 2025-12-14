#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4161724953U;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-15458;
signed char var_9 = (signed char)12;
int zero = 0;
unsigned short var_12 = (unsigned short)25809;
int var_13 = 1850713805;
short var_14 = (short)-3304;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
