#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)22135;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)41373;
short var_21 = (short)-32404;
unsigned int var_22 = 3497246132U;
int var_23 = -594247439;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
