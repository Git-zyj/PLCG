#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -779449350940418538LL;
unsigned short var_3 = (unsigned short)59822;
signed char var_6 = (signed char)-119;
unsigned short var_8 = (unsigned short)65157;
long long int var_9 = -2724172516842882345LL;
signed char var_10 = (signed char)-101;
int zero = 0;
unsigned char var_13 = (unsigned char)177;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)38519;
void init() {
}

void checksum() {
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
