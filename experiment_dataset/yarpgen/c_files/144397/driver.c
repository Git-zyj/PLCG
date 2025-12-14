#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1110215817;
int var_2 = 753478666;
long long int var_3 = 1751211238791055354LL;
int var_4 = 1769685127;
_Bool var_5 = (_Bool)0;
int var_6 = 1692490329;
unsigned long long int var_7 = 12971940846749426542ULL;
unsigned long long int var_8 = 9170848900137315227ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)32912;
int var_11 = 2037498868;
unsigned short var_12 = (unsigned short)25680;
int zero = 0;
unsigned char var_13 = (unsigned char)9;
int var_14 = -1673828692;
unsigned int var_15 = 1810034092U;
unsigned int var_16 = 3161992278U;
signed char arr_0 [23] ;
long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8052564841068373328LL : 6232548278876682185LL;
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
