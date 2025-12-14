#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2187250995676528260LL;
long long int var_4 = -4037326464760987924LL;
short var_5 = (short)-14387;
int var_6 = -145206705;
long long int var_7 = -1176061467708467119LL;
unsigned long long int var_8 = 7158408385256878082ULL;
int zero = 0;
signed char var_11 = (signed char)85;
signed char var_12 = (signed char)-98;
signed char var_13 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
