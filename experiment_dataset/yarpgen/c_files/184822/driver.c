#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3037873382U;
unsigned int var_6 = 2502797978U;
unsigned short var_7 = (unsigned short)897;
unsigned long long int var_9 = 11657682374879308308ULL;
short var_12 = (short)12326;
short var_14 = (short)11192;
unsigned char var_15 = (unsigned char)27;
signed char var_17 = (signed char)-101;
int zero = 0;
unsigned int var_20 = 3293487060U;
short var_21 = (short)20237;
unsigned int var_22 = 2364872526U;
long long int var_23 = 2884212105719276334LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
