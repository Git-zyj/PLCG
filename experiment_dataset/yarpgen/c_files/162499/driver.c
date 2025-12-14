#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10755516861836143852ULL;
unsigned int var_4 = 2185800394U;
short var_6 = (short)26779;
signed char var_13 = (signed char)-2;
short var_15 = (short)27109;
short var_19 = (short)-24485;
int zero = 0;
unsigned int var_20 = 1060212613U;
unsigned int var_21 = 2686944846U;
unsigned int var_22 = 3731469949U;
signed char var_23 = (signed char)3;
unsigned int var_24 = 1096356899U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
