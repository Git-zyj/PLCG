#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)18483;
signed char var_8 = (signed char)38;
unsigned int var_9 = 3000758401U;
unsigned short var_10 = (unsigned short)49587;
unsigned short var_16 = (unsigned short)40049;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1877882036U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
