#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1517095672;
short var_6 = (short)-11197;
unsigned short var_9 = (unsigned short)48091;
int zero = 0;
unsigned short var_11 = (unsigned short)14585;
unsigned long long int var_12 = 13503967246828451559ULL;
short var_13 = (short)-16088;
signed char var_14 = (signed char)-37;
unsigned long long int var_15 = 8133492354680949535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
