#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9517302033296680298ULL;
int var_4 = -1646442772;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)38060;
unsigned short var_11 = (unsigned short)19769;
int zero = 0;
short var_14 = (short)23617;
int var_15 = -563091453;
unsigned long long int var_16 = 6213205260833353624ULL;
int var_17 = 1963896567;
unsigned long long int var_18 = 15780267246304265874ULL;
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
