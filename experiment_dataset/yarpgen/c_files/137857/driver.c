#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 628843146;
_Bool var_1 = (_Bool)1;
long long int var_2 = 7330354625882206009LL;
long long int var_4 = -3659165222536897486LL;
unsigned long long int var_6 = 16514315104876597699ULL;
long long int var_8 = 8542302097871191211LL;
unsigned short var_14 = (unsigned short)58707;
unsigned short var_16 = (unsigned short)43323;
int zero = 0;
signed char var_20 = (signed char)36;
long long int var_21 = -8437954778520641359LL;
unsigned char var_22 = (unsigned char)185;
unsigned short var_23 = (unsigned short)23713;
unsigned char var_24 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
