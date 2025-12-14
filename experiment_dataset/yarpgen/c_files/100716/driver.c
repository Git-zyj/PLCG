#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41359;
unsigned short var_1 = (unsigned short)25515;
int var_2 = -2109788449;
long long int var_4 = 4119483072194848538LL;
unsigned int var_6 = 495789817U;
unsigned long long int var_8 = 6856616290635639832ULL;
unsigned long long int var_10 = 5045736185497605087ULL;
short var_11 = (short)6952;
int zero = 0;
short var_13 = (short)32367;
unsigned long long int var_14 = 12625849131377081016ULL;
unsigned short var_15 = (unsigned short)1941;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 207641347U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
