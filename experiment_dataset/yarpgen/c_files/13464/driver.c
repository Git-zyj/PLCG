#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 428245232;
unsigned short var_1 = (unsigned short)1853;
int var_4 = -2081721879;
unsigned long long int var_7 = 3718721715002085075ULL;
unsigned long long int var_8 = 3629718477631925208ULL;
int var_9 = 691576510;
short var_10 = (short)9478;
int zero = 0;
long long int var_11 = 1034605798804686475LL;
unsigned short var_12 = (unsigned short)4985;
int var_13 = 1555820243;
long long int var_14 = 1828444560462036573LL;
int var_15 = -921696728;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
