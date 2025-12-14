#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-110;
unsigned short var_5 = (unsigned short)1393;
long long int var_8 = -3131866848156499002LL;
unsigned short var_10 = (unsigned short)64461;
int zero = 0;
unsigned long long int var_11 = 17830740912626226877ULL;
unsigned int var_12 = 3098670906U;
long long int var_13 = 3538778966510778706LL;
short var_14 = (short)11664;
unsigned long long int arr_0 [22] ;
long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4324220146356047262ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -7888565793318796114LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 6876849525657684445ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)9820;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
