#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10466491047973358023ULL;
short var_2 = (short)4976;
unsigned short var_7 = (unsigned short)62962;
signed char var_10 = (signed char)-45;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
unsigned short var_12 = (unsigned short)27806;
unsigned int var_13 = 4049047632U;
signed char var_14 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
