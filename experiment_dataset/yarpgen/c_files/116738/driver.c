#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1731908757U;
long long int var_1 = 7544661270978491561LL;
unsigned int var_2 = 1609777988U;
signed char var_5 = (signed char)45;
unsigned long long int var_9 = 894723787106172111ULL;
long long int var_10 = 549323017601614433LL;
short var_12 = (short)-14645;
int zero = 0;
long long int var_13 = -1711618973568226619LL;
signed char var_14 = (signed char)-12;
signed char var_15 = (signed char)75;
unsigned char var_16 = (unsigned char)5;
unsigned int var_17 = 2013291624U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
