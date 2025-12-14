#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15604310114350722706ULL;
signed char var_4 = (signed char)-110;
signed char var_7 = (signed char)-82;
short var_8 = (short)-31106;
long long int var_9 = -6481748265130718762LL;
int zero = 0;
long long int var_12 = -1736931278274567157LL;
long long int var_13 = 3919610148694484215LL;
void init() {
}

void checksum() {
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
