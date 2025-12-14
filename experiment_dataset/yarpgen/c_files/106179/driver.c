#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30449;
signed char var_4 = (signed char)30;
unsigned short var_8 = (unsigned short)53004;
unsigned short var_11 = (unsigned short)25903;
unsigned char var_13 = (unsigned char)66;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
signed char var_16 = (signed char)110;
int var_17 = 1275061706;
int var_18 = -1821691358;
int var_19 = -561379980;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
