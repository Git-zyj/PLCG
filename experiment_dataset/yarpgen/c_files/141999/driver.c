#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10941;
long long int var_5 = -6534675728134485255LL;
long long int var_14 = 3075165207678267585LL;
short var_15 = (short)-31677;
long long int var_18 = 7749993861438231548LL;
unsigned int var_19 = 1069815451U;
int zero = 0;
long long int var_20 = -1028295086072089995LL;
unsigned long long int var_21 = 2221608676433657873ULL;
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
