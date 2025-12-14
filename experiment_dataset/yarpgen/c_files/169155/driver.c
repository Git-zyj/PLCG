#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3365402422U;
signed char var_4 = (signed char)67;
signed char var_6 = (signed char)67;
unsigned int var_7 = 76157517U;
signed char var_12 = (signed char)-125;
int zero = 0;
unsigned int var_16 = 1963840983U;
signed char var_17 = (signed char)45;
signed char var_18 = (signed char)-107;
unsigned int var_19 = 1138292904U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
