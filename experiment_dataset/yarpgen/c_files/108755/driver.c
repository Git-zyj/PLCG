#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2412344800U;
unsigned long long int var_4 = 9249446593866773925ULL;
unsigned long long int var_7 = 16117107133216307330ULL;
int var_8 = -2027107160;
long long int var_12 = 3568689845041288442LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)25063;
int var_16 = 1431511011;
unsigned long long int var_17 = 985365185874996755ULL;
int zero = 0;
long long int var_18 = 5947490959580740293LL;
long long int var_19 = -6770743149097363314LL;
signed char var_20 = (signed char)-100;
unsigned short var_21 = (unsigned short)5360;
short var_22 = (short)4289;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
