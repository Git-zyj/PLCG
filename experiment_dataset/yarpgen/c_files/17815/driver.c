#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30914;
long long int var_3 = 4935403636727330936LL;
unsigned int var_5 = 415612682U;
short var_6 = (short)-23755;
unsigned long long int var_7 = 17298242353005533732ULL;
unsigned int var_8 = 3613934693U;
short var_9 = (short)-7012;
unsigned long long int var_10 = 15161392804067733007ULL;
int var_11 = -487347924;
unsigned int var_12 = 2990059476U;
unsigned long long int var_13 = 7325761654061779224ULL;
short var_15 = (short)978;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)87;
short var_18 = (short)-782;
int zero = 0;
short var_20 = (short)9613;
signed char var_21 = (signed char)-81;
short var_22 = (short)-14538;
void init() {
}

void checksum() {
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
