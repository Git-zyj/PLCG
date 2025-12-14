#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1939946727784297866LL;
unsigned char var_4 = (unsigned char)64;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)49102;
short var_16 = (short)-13492;
void init() {
}

void checksum() {
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
