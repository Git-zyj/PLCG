#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3984369648U;
int var_1 = -231452131;
unsigned char var_6 = (unsigned char)186;
long long int var_9 = 2300000086379339115LL;
short var_11 = (short)27012;
int zero = 0;
unsigned char var_12 = (unsigned char)134;
long long int var_13 = -7285799925764663955LL;
long long int var_14 = -563139811345763309LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
