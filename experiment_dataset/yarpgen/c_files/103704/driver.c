#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-14;
int zero = 0;
unsigned long long int var_19 = 2823936409340256548ULL;
int var_20 = 2026712264;
short var_21 = (short)-13983;
unsigned long long int var_22 = 9971136447287808181ULL;
unsigned int var_23 = 3134361633U;
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
