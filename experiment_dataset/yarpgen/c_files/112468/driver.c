#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 4840917544174937812LL;
_Bool var_12 = (_Bool)1;
int var_16 = 2062937079;
int zero = 0;
unsigned short var_19 = (unsigned short)60319;
unsigned char var_20 = (unsigned char)5;
unsigned long long int var_21 = 17636730904262149650ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
