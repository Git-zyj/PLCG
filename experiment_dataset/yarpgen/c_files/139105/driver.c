#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27244;
unsigned long long int var_8 = 17240189361944069088ULL;
int var_10 = 36988005;
int zero = 0;
short var_12 = (short)5014;
short var_13 = (short)10565;
int var_14 = -1624156370;
short var_15 = (short)-12093;
unsigned long long int var_16 = 12474545676711681242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
