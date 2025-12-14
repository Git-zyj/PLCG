#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned int var_2 = 2540696341U;
int var_7 = 1789894227;
int var_8 = -867028845;
int var_12 = 1724780185;
int zero = 0;
int var_14 = -1407627694;
int var_15 = 628815844;
short var_16 = (short)18656;
short var_17 = (short)27875;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
