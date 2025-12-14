#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)67;
unsigned long long int var_2 = 800491631814807488ULL;
unsigned int var_5 = 1736199198U;
int var_8 = 1813836507;
int var_10 = -1888481556;
int zero = 0;
unsigned long long int var_16 = 8076372038543989950ULL;
long long int var_17 = 9152558779419352029LL;
short var_18 = (short)-311;
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
