#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4782625599911350340LL;
long long int var_2 = -639358271822426212LL;
unsigned long long int var_7 = 10067367174287818920ULL;
long long int var_9 = -772982874462888469LL;
unsigned char var_13 = (unsigned char)182;
unsigned long long int var_14 = 16598682115659727230ULL;
int zero = 0;
long long int var_15 = 7650543297093748218LL;
long long int var_16 = 4466261353450091620LL;
signed char var_17 = (signed char)-113;
unsigned long long int var_18 = 4060195950463441082ULL;
unsigned char var_19 = (unsigned char)165;
unsigned char var_20 = (unsigned char)33;
long long int var_21 = 7359814721464389554LL;
signed char var_22 = (signed char)-13;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
_Bool arr_2 [25] [25] [25] ;
long long int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 10019939123594794849ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 9432835800108425278ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4168856546456053347LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
