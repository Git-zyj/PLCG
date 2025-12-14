#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1740166963;
unsigned int var_2 = 4283885733U;
unsigned short var_6 = (unsigned short)27063;
unsigned short var_8 = (unsigned short)6132;
unsigned int var_9 = 1295035971U;
unsigned short var_12 = (unsigned short)19095;
unsigned int var_13 = 3651544219U;
int zero = 0;
long long int var_14 = 7231334144098263628LL;
unsigned short var_15 = (unsigned short)36997;
int var_16 = 1431812853;
void init() {
}

void checksum() {
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
