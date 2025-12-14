#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10700525810486277815ULL;
unsigned long long int var_3 = 8669450491129762132ULL;
short var_5 = (short)22751;
long long int var_6 = -4905983829628797132LL;
unsigned short var_11 = (unsigned short)20540;
int zero = 0;
long long int var_14 = 7364803326950861590LL;
unsigned int var_15 = 2641164530U;
unsigned long long int var_16 = 5945781951307242789ULL;
signed char var_17 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
