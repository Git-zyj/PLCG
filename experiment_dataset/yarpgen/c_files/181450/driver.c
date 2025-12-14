#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11656876129277192603ULL;
unsigned long long int var_2 = 16455886960860058727ULL;
signed char var_3 = (signed char)-75;
unsigned long long int var_4 = 14751092689219663089ULL;
unsigned long long int var_5 = 15934303565133493329ULL;
unsigned short var_6 = (unsigned short)34167;
long long int var_7 = -2305523709457640391LL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)2184;
int zero = 0;
unsigned int var_14 = 2563167705U;
unsigned long long int var_15 = 7107933969422729204ULL;
long long int var_16 = 6316431517743147366LL;
long long int var_17 = 7843017958692426858LL;
unsigned int var_18 = 2482016775U;
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
