#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8304;
long long int var_1 = -439635748935551548LL;
long long int var_14 = 7057825426178749149LL;
unsigned long long int var_15 = 3459553498477463727ULL;
unsigned short var_18 = (unsigned short)58260;
int zero = 0;
unsigned int var_20 = 3371709340U;
unsigned long long int var_21 = 4972731230964274577ULL;
unsigned short var_22 = (unsigned short)64648;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
