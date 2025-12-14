#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4925779802834927725ULL;
short var_7 = (short)31818;
long long int var_11 = 1969163824757638725LL;
int var_15 = -662129351;
unsigned char var_17 = (unsigned char)80;
unsigned int var_19 = 2407260757U;
int zero = 0;
short var_20 = (short)16519;
unsigned short var_21 = (unsigned short)44090;
int var_22 = -53476609;
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
