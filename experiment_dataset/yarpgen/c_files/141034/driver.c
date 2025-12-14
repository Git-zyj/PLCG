#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_1 = (unsigned char)36;
short var_2 = (short)20328;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)128;
int var_9 = -599255903;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-33;
unsigned char var_12 = (unsigned char)20;
unsigned short var_15 = (unsigned short)28305;
int zero = 0;
short var_16 = (short)-24813;
signed char var_17 = (signed char)122;
unsigned short var_18 = (unsigned short)39378;
short var_19 = (short)14564;
unsigned short var_20 = (unsigned short)18004;
unsigned char var_21 = (unsigned char)49;
unsigned char var_22 = (unsigned char)82;
unsigned char var_23 = (unsigned char)225;
short var_24 = (short)25161;
int var_25 = -691362108;
short var_26 = (short)19661;
int var_27 = 1050079349;
int var_28 = 1123113858;
unsigned char var_29 = (unsigned char)40;
unsigned char var_30 = (unsigned char)185;
unsigned short arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_6 [22] ;
int arr_20 [22] ;
unsigned long long int arr_24 [22] ;
unsigned char arr_3 [17] [17] ;
unsigned long long int arr_9 [22] [22] ;
short arr_18 [22] [22] ;
unsigned long long int arr_27 [22] [22] [22] [22] ;
unsigned char arr_30 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)10605;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2787896;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 7429615645904070964ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 9726587324400193257ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = -250813233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 14025158847831621857ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 10951799506647084457ULL : 3313664555609015032ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26680 : (short)-28547;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 16949189122823314490ULL : 10849715856384248764ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
