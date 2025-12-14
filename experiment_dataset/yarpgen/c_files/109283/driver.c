#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2707;
unsigned short var_5 = (unsigned short)61049;
signed char var_7 = (signed char)106;
unsigned int var_15 = 1751637203U;
long long int var_16 = 2080732608740501887LL;
int var_17 = 1519070714;
int zero = 0;
long long int var_18 = 6100953696250932760LL;
short var_19 = (short)22970;
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
