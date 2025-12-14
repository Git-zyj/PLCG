#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
signed char var_3 = (signed char)-87;
unsigned short var_7 = (unsigned short)62989;
signed char var_10 = (signed char)-76;
unsigned short var_15 = (unsigned short)28606;
unsigned long long int var_17 = 12309272087464779605ULL;
signed char var_18 = (signed char)-8;
int zero = 0;
long long int var_19 = 3878907077693837904LL;
signed char var_20 = (signed char)-47;
unsigned char var_21 = (unsigned char)213;
unsigned short var_22 = (unsigned short)20160;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
