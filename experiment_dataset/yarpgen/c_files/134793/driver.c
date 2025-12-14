#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1293299053;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)170;
unsigned long long int var_8 = 11313734660450863870ULL;
unsigned int var_11 = 1351634239U;
long long int var_12 = -4780526830629612213LL;
long long int var_15 = 401864824939197462LL;
int zero = 0;
long long int var_17 = 483214992534664491LL;
unsigned int var_18 = 2962345582U;
short var_19 = (short)28208;
unsigned int var_20 = 1549447793U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
