#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1745033609366799695LL;
int var_2 = -969219059;
unsigned char var_3 = (unsigned char)59;
unsigned char var_5 = (unsigned char)39;
long long int var_6 = -366645142990338488LL;
unsigned char var_7 = (unsigned char)215;
unsigned int var_8 = 3980356755U;
long long int var_9 = -1213016477112737492LL;
unsigned short var_10 = (unsigned short)9350;
unsigned short var_12 = (unsigned short)64583;
unsigned int var_13 = 2237424664U;
int var_14 = 1426545144;
unsigned int var_16 = 328018389U;
int zero = 0;
long long int var_18 = 8153064490731079605LL;
long long int var_19 = -2599696057259268102LL;
unsigned short var_20 = (unsigned short)2777;
long long int var_21 = 837151828081227617LL;
unsigned int var_22 = 1956174199U;
long long int var_23 = 38336680096689020LL;
unsigned short var_24 = (unsigned short)22678;
int var_25 = -1458558091;
long long int var_26 = -5240265677012141854LL;
unsigned short var_27 = (unsigned short)28022;
unsigned short var_28 = (unsigned short)60351;
unsigned short arr_1 [10] [10] ;
long long int arr_3 [10] ;
unsigned char arr_4 [10] ;
long long int arr_5 [10] [10] [10] ;
long long int arr_6 [14] [14] ;
long long int arr_7 [14] ;
unsigned short arr_9 [14] ;
int arr_11 [14] [14] [14] ;
long long int arr_12 [14] [14] ;
unsigned int arr_15 [14] [14] [14] [14] ;
unsigned int arr_16 [14] [14] [14] [14] [14] ;
long long int arr_19 [14] [14] [14] [14] ;
unsigned char arr_22 [14] [14] [14] ;
unsigned char arr_23 [14] [14] [14] [14] [14] ;
unsigned char arr_18 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)37421;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -3941205196608297027LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8090104116486135843LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = -7485931904289599441LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1317668381463982179LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)32861;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 907848654;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -2634806742087149101LL : -7586180881721878705LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1701292068U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 3839832063U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 4739614795142508389LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)254 : (unsigned char)106;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
