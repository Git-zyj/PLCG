#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)9264;
signed char var_3 = (signed char)80;
unsigned long long int var_5 = 15349549066007815064ULL;
signed char var_7 = (signed char)-111;
unsigned long long int var_8 = 17047424440933609864ULL;
unsigned char var_9 = (unsigned char)127;
unsigned short var_10 = (unsigned short)43396;
short var_11 = (short)3373;
unsigned int var_12 = 1533009059U;
unsigned char var_13 = (unsigned char)1;
signed char var_14 = (signed char)-121;
long long int var_15 = -4777086233804059652LL;
int zero = 0;
short var_18 = (short)-29444;
long long int var_19 = -3307674267946761961LL;
unsigned int var_20 = 954390533U;
unsigned long long int var_21 = 1505452858194212771ULL;
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
