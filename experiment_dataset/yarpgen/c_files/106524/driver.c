#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7388;
signed char var_4 = (signed char)90;
int var_9 = 485031664;
short var_13 = (short)-28420;
int zero = 0;
signed char var_20 = (signed char)51;
signed char var_21 = (signed char)-17;
unsigned int var_22 = 3958811171U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
