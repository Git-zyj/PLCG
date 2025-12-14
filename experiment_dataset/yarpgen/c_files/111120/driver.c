#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
int var_1 = -1759725747;
long long int var_3 = -6799857254459355342LL;
unsigned long long int var_4 = 7571781952428120722ULL;
unsigned long long int var_5 = 15997835511341277734ULL;
signed char var_6 = (signed char)-75;
unsigned short var_7 = (unsigned short)20881;
long long int var_9 = -4757563679179229001LL;
int var_11 = -1522969694;
unsigned short var_12 = (unsigned short)27608;
int zero = 0;
long long int var_15 = 3105509242642411864LL;
signed char var_16 = (signed char)16;
unsigned char var_17 = (unsigned char)213;
int var_18 = 492866616;
unsigned char var_19 = (unsigned char)240;
unsigned char var_20 = (unsigned char)140;
long long int var_21 = -8282918137577269435LL;
signed char var_22 = (signed char)119;
short var_23 = (short)-17479;
long long int var_24 = -26010068812855528LL;
int var_25 = 1991467352;
long long int var_26 = 7911040723689591266LL;
unsigned long long int var_27 = 7404314676221556822ULL;
unsigned char arr_1 [11] ;
unsigned int arr_2 [11] ;
short arr_3 [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
unsigned short arr_9 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] [11] ;
unsigned long long int arr_12 [11] ;
_Bool arr_13 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_16 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2567600995U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)15339;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 12963537237863339488ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4628;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 13951179951920204981ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 5857986014044071224ULL : 4966760290726107328ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)63548 : (unsigned short)24425;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
