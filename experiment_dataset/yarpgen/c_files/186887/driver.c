#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2853338856595401488LL;
short var_7 = (short)3882;
long long int var_9 = -6344008110657784301LL;
int zero = 0;
unsigned int var_15 = 1673455459U;
unsigned char var_16 = (unsigned char)43;
short var_17 = (short)-24003;
unsigned long long int var_18 = 14494316787922388326ULL;
unsigned int var_19 = 1099399199U;
unsigned short var_20 = (unsigned short)30610;
unsigned int var_21 = 449446634U;
long long int var_22 = 6344238286584069975LL;
unsigned short var_23 = (unsigned short)23755;
unsigned int var_24 = 3512354723U;
unsigned long long int var_25 = 1350079486407916964ULL;
long long int var_26 = 6317099428390454673LL;
long long int var_27 = 132072797686576559LL;
short arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
short arr_2 [18] ;
unsigned int arr_5 [15] ;
unsigned long long int arr_7 [15] ;
unsigned int arr_8 [15] ;
unsigned long long int arr_12 [15] [15] [15] ;
short arr_3 [18] [18] ;
unsigned char arr_6 [15] ;
unsigned long long int arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)30259 : (short)19238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 4998866628453684945ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-22654;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1476250904U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 10841887312191826337ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 2222021423U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 12774733398987558312ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)32548 : (short)-19829;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 1168842678723900629ULL : 1170655405075114397ULL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
