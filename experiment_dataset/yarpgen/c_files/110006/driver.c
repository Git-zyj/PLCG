#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2142892700U;
unsigned short var_6 = (unsigned short)62570;
signed char var_8 = (signed char)33;
unsigned short var_9 = (unsigned short)31441;
int zero = 0;
short var_13 = (short)-16296;
unsigned int var_14 = 2599535387U;
long long int var_15 = -4165674828570009281LL;
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
