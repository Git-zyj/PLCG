#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -521017678;
signed char var_3 = (signed char)-117;
signed char var_4 = (signed char)-121;
long long int var_7 = 1873224013594443240LL;
short var_10 = (short)4488;
signed char var_12 = (signed char)33;
signed char var_14 = (signed char)-73;
int zero = 0;
unsigned int var_15 = 3282898335U;
long long int var_16 = 7729349863291042801LL;
long long int var_17 = 8955825075877339017LL;
void init() {
}

void checksum() {
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
