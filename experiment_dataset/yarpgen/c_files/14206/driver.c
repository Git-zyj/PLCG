#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6598514511538167713LL;
signed char var_6 = (signed char)-22;
signed char var_9 = (signed char)-69;
long long int var_15 = 5995443087252992832LL;
int zero = 0;
unsigned char var_18 = (unsigned char)11;
unsigned char var_19 = (unsigned char)8;
unsigned char var_20 = (unsigned char)104;
long long int var_21 = 3266351927156342212LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
