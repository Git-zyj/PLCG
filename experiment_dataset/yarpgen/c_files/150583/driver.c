#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34189;
unsigned short var_4 = (unsigned short)21515;
short var_6 = (short)25344;
unsigned char var_15 = (unsigned char)26;
int zero = 0;
short var_20 = (short)5602;
signed char var_21 = (signed char)-37;
int var_22 = -12463829;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
