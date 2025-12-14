#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -635652014;
unsigned long long int var_8 = 16593965969720654591ULL;
signed char var_14 = (signed char)-101;
int var_17 = 2101450471;
signed char var_18 = (signed char)-99;
int zero = 0;
signed char var_19 = (signed char)-10;
int var_20 = -1126373361;
unsigned long long int var_21 = 16729780635956280549ULL;
unsigned short var_22 = (unsigned short)55413;
short var_23 = (short)25015;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
