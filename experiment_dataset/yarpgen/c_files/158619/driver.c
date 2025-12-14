#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1320911677U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)24907;
long long int var_9 = 6919733002717558678LL;
unsigned long long int var_12 = 1440691134775913862ULL;
long long int var_13 = -2063532406946679130LL;
int var_14 = -1688235285;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
unsigned char var_17 = (unsigned char)47;
_Bool var_18 = (_Bool)1;
short var_19 = (short)18835;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-49 : (signed char)89;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
