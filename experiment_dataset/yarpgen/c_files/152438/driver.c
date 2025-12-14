#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)39157;
long long int var_8 = -2346363395819293385LL;
unsigned short var_9 = (unsigned short)44264;
unsigned short var_12 = (unsigned short)63030;
unsigned long long int var_13 = 15999849457013535759ULL;
long long int var_16 = -7421048780644507627LL;
signed char var_18 = (signed char)-103;
int zero = 0;
unsigned long long int var_20 = 10420330339887655566ULL;
short var_21 = (short)27700;
long long int var_22 = -1830913606204951051LL;
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
