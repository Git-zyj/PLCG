#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1384078756;
unsigned long long int var_4 = 8588505531398085669ULL;
long long int var_5 = -796083925066911222LL;
unsigned int var_6 = 2499977277U;
unsigned int var_10 = 3781504860U;
int var_12 = -399800291;
long long int var_13 = 6365091396956900916LL;
int var_15 = -241474698;
unsigned long long int var_16 = 3963517470193617167ULL;
int var_17 = -957199928;
int zero = 0;
int var_18 = -1845507391;
int var_19 = 244546081;
unsigned long long int var_20 = 2264026787153051672ULL;
long long int var_21 = -6509061966926639724LL;
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
