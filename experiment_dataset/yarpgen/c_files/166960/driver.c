#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6040563239618620239LL;
short var_2 = (short)-20604;
signed char var_3 = (signed char)24;
long long int var_9 = -1541383372579958832LL;
unsigned short var_11 = (unsigned short)25127;
int zero = 0;
unsigned char var_12 = (unsigned char)108;
short var_13 = (short)-7647;
long long int var_14 = -1345974180861092416LL;
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
