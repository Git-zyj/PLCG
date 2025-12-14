#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)960;
signed char var_2 = (signed char)89;
short var_3 = (short)18296;
unsigned int var_4 = 444731435U;
unsigned short var_6 = (unsigned short)30290;
unsigned int var_7 = 2915098110U;
unsigned short var_8 = (unsigned short)59503;
int zero = 0;
short var_11 = (short)1470;
signed char var_12 = (signed char)109;
unsigned char var_13 = (unsigned char)4;
long long int var_14 = -8482893517683340385LL;
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
