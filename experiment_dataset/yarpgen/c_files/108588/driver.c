#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9241201330458663604ULL;
unsigned int var_3 = 538559977U;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3761066050U;
long long int var_9 = -4896970685175558765LL;
long long int var_12 = -3969952782505925974LL;
short var_13 = (short)-30753;
unsigned long long int var_14 = 4048371805781596871ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)151;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3183869212U;
void init() {
}

void checksum() {
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
