#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65286;
short var_3 = (short)30178;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_11 = -855288714;
unsigned int var_12 = 3110230227U;
_Bool var_13 = (_Bool)0;
int var_15 = -1147091498;
unsigned char var_17 = (unsigned char)62;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
long long int var_20 = 8557289355185216943LL;
unsigned short var_21 = (unsigned short)44135;
unsigned short var_22 = (unsigned short)10584;
unsigned long long int var_23 = 13606372187217861250ULL;
int var_24 = 1110393427;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -4220606762678965117LL;
}

void checksum() {
    hash(&seed, var_19);
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
