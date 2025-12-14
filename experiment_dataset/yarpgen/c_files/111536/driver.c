#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -2321847716941822297LL;
unsigned short var_17 = (unsigned short)58583;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)19992;
unsigned int var_21 = 2313066425U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
