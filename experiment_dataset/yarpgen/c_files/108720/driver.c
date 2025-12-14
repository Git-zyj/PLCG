#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8430824061945718122LL;
unsigned int var_5 = 4062731461U;
long long int var_6 = -3485989357157760757LL;
int var_7 = 176626754;
int var_9 = -722688064;
int var_11 = -1887382801;
int zero = 0;
short var_14 = (short)-5493;
unsigned int var_15 = 1550013507U;
void init() {
}

void checksum() {
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
