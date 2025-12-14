#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3230838312088503845LL;
short var_3 = (short)26176;
long long int var_4 = -4615858680758466334LL;
int var_5 = -1757891175;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)26808;
short var_11 = (short)-3868;
unsigned short var_12 = (unsigned short)9600;
long long int var_15 = 4816865868632621397LL;
short var_18 = (short)15342;
long long int var_19 = -6084361083896140385LL;
int zero = 0;
int var_20 = -1268246629;
signed char var_21 = (signed char)-40;
int var_22 = -322345953;
int var_23 = 1694096693;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
