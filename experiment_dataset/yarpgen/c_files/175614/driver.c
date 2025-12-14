#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
unsigned long long int var_3 = 15233140500187908752ULL;
long long int var_5 = -3227052616787693791LL;
unsigned short var_6 = (unsigned short)8055;
unsigned short var_8 = (unsigned short)15808;
unsigned short var_12 = (unsigned short)27118;
unsigned short var_14 = (unsigned short)9278;
unsigned long long int var_18 = 3814812756801896635ULL;
int zero = 0;
long long int var_20 = -4746663494220106561LL;
long long int var_21 = 6815655049218064558LL;
signed char var_22 = (signed char)-118;
signed char var_23 = (signed char)123;
unsigned short var_24 = (unsigned short)43733;
signed char var_25 = (signed char)-30;
unsigned long long int var_26 = 17606264414392633859ULL;
unsigned short var_27 = (unsigned short)52162;
short var_28 = (short)24227;
long long int var_29 = 2884535504019600327LL;
long long int var_30 = 7157544889583820418LL;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_2 [20] [20] ;
signed char arr_3 [24] ;
signed char arr_4 [24] [24] ;
unsigned long long int arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3274490472394511514ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 13804832508674282903ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 17598149530363856404ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)60404;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
