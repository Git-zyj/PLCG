#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2070414575;
int var_2 = 768153590;
long long int var_3 = 3292741961192974579LL;
unsigned short var_4 = (unsigned short)43842;
int var_5 = 341517680;
unsigned int var_6 = 1436274727U;
short var_7 = (short)-7792;
int var_8 = 1754112591;
int var_9 = 964615555;
unsigned short var_11 = (unsigned short)35414;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8717207608755956515ULL;
void init() {
}

void checksum() {
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
