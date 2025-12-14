#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
unsigned long long int var_2 = 13367125084997139103ULL;
unsigned short var_4 = (unsigned short)47355;
long long int var_6 = -3204543778574356773LL;
signed char var_15 = (signed char)-73;
int zero = 0;
unsigned short var_19 = (unsigned short)20967;
unsigned long long int var_20 = 18016257360270466764ULL;
unsigned int var_21 = 3273051986U;
int var_22 = -1430113811;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
