#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10618730391717451811ULL;
signed char var_6 = (signed char)48;
short var_7 = (short)-14316;
int zero = 0;
unsigned int var_10 = 3495020067U;
unsigned long long int var_11 = 12557574744938710451ULL;
int var_12 = -1398312277;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
