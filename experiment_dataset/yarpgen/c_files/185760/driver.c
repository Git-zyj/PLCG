#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8044;
signed char var_3 = (signed char)-39;
short var_6 = (short)-4715;
unsigned long long int var_11 = 529706503214342224ULL;
unsigned int var_12 = 2977442090U;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
long long int var_16 = 8251524029676158713LL;
long long int var_17 = -6533445636288365795LL;
signed char var_18 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
