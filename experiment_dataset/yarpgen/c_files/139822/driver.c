#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45869;
unsigned int var_2 = 601045875U;
unsigned int var_9 = 302016515U;
unsigned int var_10 = 3112375714U;
short var_13 = (short)-2232;
short var_15 = (short)-4822;
long long int var_16 = -2352286208511207884LL;
int var_17 = -1411279655;
int zero = 0;
int var_18 = 2028383259;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
