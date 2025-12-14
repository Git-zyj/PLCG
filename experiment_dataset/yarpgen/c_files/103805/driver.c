#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4426585770284136491LL;
unsigned long long int var_2 = 18259721522417059610ULL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-32;
unsigned long long int var_6 = 1772646566264843630ULL;
long long int var_8 = -619469995416876703LL;
long long int var_9 = -2403748498438734922LL;
signed char var_11 = (signed char)35;
int zero = 0;
unsigned long long int var_13 = 6455578361560421488ULL;
unsigned long long int var_14 = 17264650829278577653ULL;
short var_15 = (short)-3184;
unsigned long long int var_16 = 783300046278864544ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
