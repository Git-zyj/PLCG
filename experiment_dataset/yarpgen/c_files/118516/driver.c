#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)31580;
int var_6 = 2081982980;
unsigned long long int var_7 = 6832708631037160885ULL;
unsigned long long int var_8 = 3282605906735107880ULL;
short var_9 = (short)9739;
unsigned char var_11 = (unsigned char)85;
long long int var_14 = -7595450401552050417LL;
int zero = 0;
unsigned long long int var_15 = 14276025331178305508ULL;
unsigned short var_16 = (unsigned short)20573;
void init() {
}

void checksum() {
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
