#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2529224877751821808LL;
unsigned char var_4 = (unsigned char)21;
unsigned int var_6 = 944691400U;
signed char var_8 = (signed char)16;
int var_10 = -1452944616;
unsigned int var_11 = 799448880U;
int zero = 0;
unsigned long long int var_16 = 10404696048991768104ULL;
unsigned char var_17 = (unsigned char)79;
unsigned short var_18 = (unsigned short)21932;
unsigned short var_19 = (unsigned short)962;
int var_20 = 1596699381;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
