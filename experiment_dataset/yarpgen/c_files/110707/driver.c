#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1575546806;
unsigned int var_3 = 653871415U;
long long int var_4 = 4493463573651986553LL;
signed char var_5 = (signed char)15;
int var_6 = 1752988927;
unsigned int var_7 = 1705402441U;
unsigned char var_9 = (unsigned char)108;
int zero = 0;
unsigned int var_11 = 4043609654U;
unsigned long long int var_12 = 13842613146764728496ULL;
int var_13 = -759679002;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
