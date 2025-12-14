#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2625930976883522556LL;
int var_3 = 1781398286;
unsigned char var_4 = (unsigned char)39;
short var_5 = (short)-2013;
unsigned long long int var_7 = 7070797670196532026ULL;
long long int var_9 = -5326560711271162054LL;
long long int var_10 = -6730856094233279291LL;
int var_11 = -988260358;
signed char var_13 = (signed char)111;
int zero = 0;
unsigned int var_15 = 999535485U;
unsigned long long int var_16 = 14244859605841076316ULL;
unsigned int var_17 = 467458196U;
unsigned char var_18 = (unsigned char)83;
unsigned long long int arr_0 [21] ;
int arr_2 [21] ;
unsigned int arr_3 [21] [21] ;
unsigned char arr_5 [21] [21] [21] [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned int arr_9 [21] ;
short arr_10 [21] ;
int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 12093660511737573453ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1407646831;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1267586650U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)9871;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2171169537U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)10107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -764507002;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
