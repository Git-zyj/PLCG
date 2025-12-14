#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25655;
unsigned char var_1 = (unsigned char)31;
int var_3 = 278835007;
unsigned char var_6 = (unsigned char)5;
long long int var_7 = -6912788298012364376LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-19998;
short var_13 = (short)9070;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
