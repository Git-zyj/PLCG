#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 678454289;
long long int var_4 = -8829879402848676204LL;
unsigned long long int var_11 = 2644239501278430758ULL;
signed char var_12 = (signed char)-17;
unsigned int var_14 = 4257261643U;
int zero = 0;
unsigned char var_16 = (unsigned char)101;
int var_17 = -498831435;
long long int var_18 = 4735305469305771671LL;
unsigned short var_19 = (unsigned short)6543;
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
