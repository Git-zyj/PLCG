#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
int var_2 = -1197487356;
long long int var_3 = -1119611578387612416LL;
long long int var_5 = -4626631988262925358LL;
unsigned short var_6 = (unsigned short)57281;
unsigned long long int var_7 = 7121370263313615383ULL;
int var_9 = -1798160118;
unsigned short var_10 = (unsigned short)23782;
short var_11 = (short)4292;
unsigned short var_12 = (unsigned short)54833;
int zero = 0;
unsigned short var_13 = (unsigned short)20987;
int var_14 = -725238600;
int var_15 = -1459218948;
unsigned char var_16 = (unsigned char)177;
short arr_0 [25] ;
signed char arr_1 [25] [25] ;
int arr_2 [25] [25] ;
short arr_4 [25] [25] [25] ;
unsigned char arr_5 [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-30181;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 378798164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-417;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -2138730069;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
