#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2874083346530811706LL;
unsigned char var_2 = (unsigned char)81;
short var_6 = (short)13176;
short var_7 = (short)4657;
short var_12 = (short)27327;
short var_13 = (short)23828;
int zero = 0;
unsigned long long int var_14 = 9219376061248570490ULL;
long long int var_15 = -4078486687191340191LL;
unsigned long long int var_16 = 4377506256802234101ULL;
short var_17 = (short)3488;
unsigned long long int var_18 = 16463330179106271357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
