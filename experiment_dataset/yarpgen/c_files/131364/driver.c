#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60324;
_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)72;
long long int var_8 = 926818782143209618LL;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
unsigned long long int var_15 = 14502335733545148131ULL;
unsigned long long int var_16 = 17277014773190612887ULL;
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
