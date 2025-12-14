#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
long long int var_3 = 6641089409001807841LL;
short var_5 = (short)-29610;
unsigned int var_7 = 979544145U;
unsigned long long int var_9 = 8007261861355963325ULL;
unsigned int var_10 = 1979167659U;
unsigned long long int var_12 = 15456519382794256774ULL;
unsigned int var_13 = 2355051057U;
long long int var_14 = -974970269516497249LL;
unsigned long long int var_15 = 17702978178495788798ULL;
int zero = 0;
unsigned int var_19 = 504765721U;
unsigned short var_20 = (unsigned short)17281;
signed char var_21 = (signed char)107;
signed char var_22 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
