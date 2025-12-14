#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
short var_2 = (short)1119;
short var_3 = (short)19364;
signed char var_4 = (signed char)115;
short var_7 = (short)22940;
int zero = 0;
int var_10 = -835857189;
int var_11 = 1637111610;
unsigned short var_12 = (unsigned short)27949;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
