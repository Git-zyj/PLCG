#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5336587728310618494LL;
unsigned char var_9 = (unsigned char)28;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)35;
signed char var_12 = (signed char)77;
unsigned short var_14 = (unsigned short)24223;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
unsigned short var_19 = (unsigned short)34244;
signed char var_20 = (signed char)18;
long long int var_21 = 1215289850133821182LL;
int var_22 = -1811343118;
signed char var_23 = (signed char)-64;
long long int var_24 = -1613140334662789734LL;
_Bool var_25 = (_Bool)1;
_Bool arr_2 [18] ;
long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -6751452165968075093LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
