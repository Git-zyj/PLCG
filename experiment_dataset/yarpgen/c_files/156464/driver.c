#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -746232646;
int var_1 = -980311178;
signed char var_2 = (signed char)89;
int var_3 = 37687809;
unsigned long long int var_5 = 15348617311575702404ULL;
int var_6 = -1064430785;
_Bool var_8 = (_Bool)0;
int var_9 = 1678619070;
int var_10 = -1592029392;
int var_11 = -1299138457;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1724678021;
unsigned long long int var_14 = 11690571156188936500ULL;
int var_15 = -613076929;
void init() {
}

void checksum() {
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
