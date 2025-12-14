#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6272382765500999199ULL;
unsigned short var_3 = (unsigned short)52465;
int var_6 = 1492665673;
signed char var_8 = (signed char)27;
int zero = 0;
unsigned int var_12 = 982628004U;
int var_13 = -535593731;
unsigned long long int var_14 = 6309754805371538132ULL;
signed char var_15 = (signed char)31;
void init() {
}

void checksum() {
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
