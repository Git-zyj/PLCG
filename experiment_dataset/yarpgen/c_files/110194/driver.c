#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)47139;
short var_6 = (short)21131;
signed char var_8 = (signed char)70;
unsigned short var_9 = (unsigned short)59429;
int zero = 0;
signed char var_10 = (signed char)-121;
unsigned short var_11 = (unsigned short)50258;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
