#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4020467261819523329LL;
unsigned char var_5 = (unsigned char)10;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 4188593458U;
unsigned char var_12 = (unsigned char)150;
long long int var_14 = 8423171353091158484LL;
int var_19 = -2014246943;
int zero = 0;
int var_20 = 1383059718;
long long int var_21 = 2537487297104338605LL;
signed char var_22 = (signed char)-48;
long long int var_23 = -6526492639330800827LL;
int var_24 = 1010036536;
int var_25 = -935743376;
unsigned char var_26 = (unsigned char)57;
long long int var_27 = 4658183499589288294LL;
signed char var_28 = (signed char)-123;
int arr_0 [10] ;
short arr_3 [10] ;
long long int arr_4 [10] [10] [10] ;
long long int arr_8 [22] ;
int arr_10 [22] [22] [22] ;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1161589153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-30248;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2263347113774646392LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -6486524862960535316LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -459282019 : 733442625;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)129;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
