#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned long long int var_1 = 11579551348578614894ULL;
unsigned int var_2 = 1429913766U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 9962060450259521388ULL;
short var_5 = (short)-20176;
signed char var_6 = (signed char)-26;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 35836925U;
unsigned char var_9 = (unsigned char)102;
int var_10 = 546584015;
unsigned int var_11 = 1339351514U;
long long int var_12 = -829261190854750243LL;
signed char var_13 = (signed char)74;
unsigned long long int var_14 = 5173033663943748832ULL;
int zero = 0;
signed char var_15 = (signed char)101;
long long int var_16 = 2070563210769835270LL;
unsigned char var_17 = (unsigned char)98;
signed char var_18 = (signed char)-75;
short var_19 = (short)-13560;
unsigned char var_20 = (unsigned char)163;
unsigned short var_21 = (unsigned short)20876;
unsigned short var_22 = (unsigned short)51694;
long long int var_23 = 7037417371351976056LL;
short var_24 = (short)-12300;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)6;
unsigned char var_27 = (unsigned char)22;
signed char var_28 = (signed char)-118;
short var_29 = (short)-27448;
unsigned long long int var_30 = 4918198823527958804ULL;
unsigned int arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_5 [17] ;
long long int arr_12 [21] ;
unsigned short arr_14 [21] ;
short arr_15 [21] [21] ;
long long int arr_25 [21] [21] [21] [21] [21] ;
long long int arr_29 [21] [21] [21] ;
signed char arr_30 [21] [21] [21] ;
unsigned long long int arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
long long int arr_9 [17] ;
short arr_13 [21] ;
_Bool arr_16 [21] ;
unsigned long long int arr_17 [21] [21] [21] ;
unsigned char arr_20 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 993633736U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)20470;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3752079179039250170ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -6578924674027626864LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (unsigned short)20101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (short)24163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = -2649376549587428773LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4383604668575297023LL : 6777974233187004757LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1899029998620412601ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56328;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 460997971548569132LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-25420 : (short)19118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12762595806070198947ULL : 8390396715252260394ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)224;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
