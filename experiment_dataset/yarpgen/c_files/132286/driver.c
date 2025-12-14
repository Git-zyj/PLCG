#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-186;
unsigned char var_2 = (unsigned char)193;
long long int var_3 = 8493518060774886786LL;
short var_6 = (short)-5101;
unsigned int var_7 = 546442772U;
unsigned int var_9 = 1964143640U;
long long int var_10 = 624445071665425118LL;
int zero = 0;
unsigned char var_13 = (unsigned char)67;
unsigned long long int var_14 = 4777423624935560058ULL;
unsigned long long int var_15 = 180578198668761189ULL;
unsigned long long int var_16 = 3849743362873129105ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
