#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 535968484U;
_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)170;
_Bool var_12 = (_Bool)0;
long long int var_15 = -5784465989395175167LL;
long long int var_16 = 6285542730808190458LL;
int zero = 0;
long long int var_17 = -8362868547358912639LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4405855001931422096LL;
unsigned long long int var_20 = 7297402106513353992ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
