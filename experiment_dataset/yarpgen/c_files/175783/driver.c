#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1620839673;
unsigned short var_6 = (unsigned short)40424;
int var_7 = -197383063;
int zero = 0;
unsigned int var_19 = 1118751923U;
signed char var_20 = (signed char)-97;
signed char var_21 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
