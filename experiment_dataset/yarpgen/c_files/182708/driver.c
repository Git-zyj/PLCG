#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1460477854;
unsigned int var_6 = 2437771475U;
unsigned short var_7 = (unsigned short)20256;
signed char var_11 = (signed char)-72;
int zero = 0;
unsigned int var_12 = 2892732947U;
unsigned int var_13 = 2537739332U;
int var_14 = 1201876687;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
