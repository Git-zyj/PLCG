#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2835139851U;
short var_14 = (short)8885;
signed char var_17 = (signed char)-35;
int zero = 0;
short var_19 = (short)10482;
unsigned short var_20 = (unsigned short)12060;
short var_21 = (short)20202;
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
