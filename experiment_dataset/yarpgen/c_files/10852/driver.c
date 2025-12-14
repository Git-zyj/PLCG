#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1173390579;
unsigned long long int var_6 = 6620679215376579368ULL;
int var_7 = 1653084701;
long long int var_9 = -4639953399027277614LL;
long long int var_10 = 3382093459134781998LL;
unsigned int var_12 = 1087857592U;
int zero = 0;
unsigned int var_13 = 2702555156U;
unsigned char var_14 = (unsigned char)107;
unsigned long long int var_15 = 17000887110397612192ULL;
void init() {
}

void checksum() {
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
