#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3407981536U;
long long int var_8 = 6192173571086317576LL;
unsigned long long int var_10 = 13346245953720883927ULL;
long long int var_12 = 911829498256899932LL;
int zero = 0;
short var_17 = (short)29055;
unsigned long long int var_18 = 1358856025371886175ULL;
int var_19 = 1811743606;
void init() {
}

void checksum() {
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
