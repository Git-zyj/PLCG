#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2599615522U;
signed char var_3 = (signed char)26;
int var_5 = -1689952944;
unsigned int var_7 = 195488244U;
int zero = 0;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)-108;
signed char var_14 = (signed char)124;
short var_15 = (short)-14287;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
