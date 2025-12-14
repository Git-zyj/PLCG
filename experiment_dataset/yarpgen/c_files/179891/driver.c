#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)223;
unsigned long long int var_4 = 1612405063149469113ULL;
short var_5 = (short)-28808;
short var_6 = (short)17682;
short var_7 = (short)19610;
long long int var_8 = 3825598477880024573LL;
unsigned char var_9 = (unsigned char)153;
short var_10 = (short)-342;
long long int var_11 = 491977815372101616LL;
unsigned char var_12 = (unsigned char)238;
long long int var_14 = -5101648269754265356LL;
unsigned long long int var_15 = 6785634033680278333ULL;
int zero = 0;
long long int var_16 = -7115142551408312924LL;
short var_17 = (short)-31130;
unsigned long long int var_18 = 18134517704393849262ULL;
long long int var_19 = 4377855561379391155LL;
short var_20 = (short)10045;
unsigned long long int var_21 = 10716310465151146354ULL;
unsigned char var_22 = (unsigned char)232;
unsigned char var_23 = (unsigned char)159;
unsigned char var_24 = (unsigned char)57;
unsigned char var_25 = (unsigned char)91;
long long int var_26 = -3855479169265536433LL;
unsigned char var_27 = (unsigned char)50;
unsigned long long int var_28 = 8767190735120478242ULL;
short var_29 = (short)-7029;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned char arr_4 [20] [20] ;
short arr_5 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] [20] ;
short arr_11 [20] ;
short arr_13 [20] [20] ;
long long int arr_3 [10] [10] ;
unsigned long long int arr_9 [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] [20] ;
long long int arr_19 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1679047771725138043ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)21209;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6674384822422694290ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5119489694931065204ULL : 9046388370988965767ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-21100 : (short)-27441;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-27843;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -4216895413531695845LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 8847542277736143792ULL : 17630545378085993438ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5714591397383412009ULL : 4257103019277670247ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8570585552528251565LL : -6837794975217095378LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
