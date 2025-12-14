#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18559;
unsigned int var_1 = 1102311369U;
unsigned long long int var_2 = 18108886053550074505ULL;
int var_3 = 604086168;
unsigned long long int var_5 = 17153165680908635009ULL;
int var_6 = 851649035;
int var_8 = 1961553977;
int var_9 = 78998203;
int var_10 = 661451650;
long long int var_13 = 6755415279186592918LL;
unsigned long long int var_14 = 8241125687707285121ULL;
short var_15 = (short)268;
int zero = 0;
unsigned int var_16 = 439594319U;
unsigned short var_17 = (unsigned short)44384;
unsigned int var_18 = 4144284939U;
unsigned int var_19 = 3214669605U;
int var_20 = -312542377;
int var_21 = -1027201816;
_Bool var_22 = (_Bool)1;
short var_23 = (short)22637;
long long int var_24 = -5198122291874131501LL;
long long int var_25 = 5801687720807752734LL;
unsigned int var_26 = 3099038640U;
long long int var_27 = -6049588640987128410LL;
unsigned long long int var_28 = 386863297609210842ULL;
int var_29 = 1251836279;
unsigned int var_30 = 1389685791U;
int var_31 = 1290750817;
unsigned long long int var_32 = 7358991091427063478ULL;
short var_33 = (short)32418;
unsigned long long int var_34 = 15846408266052007349ULL;
unsigned short var_35 = (unsigned short)3614;
unsigned long long int var_36 = 10503320498265389251ULL;
unsigned long long int arr_0 [10] [10] ;
unsigned int arr_1 [10] ;
signed char arr_5 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] ;
short arr_7 [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] ;
unsigned int arr_10 [10] [10] [10] [10] ;
_Bool arr_11 [10] [10] [10] ;
unsigned int arr_12 [10] [10] [10] ;
unsigned int arr_15 [10] [10] [10] [10] ;
int arr_16 [10] ;
unsigned long long int arr_18 [10] [10] [10] [10] ;
unsigned long long int arr_2 [10] ;
unsigned int arr_13 [10] [10] [10] [10] ;
unsigned long long int arr_19 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 17489300671780269334ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3142725824U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)104 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 5397035958223144228ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (short)5017;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11722667809954528608ULL : 5564363654214316443ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 197257880U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3413921558U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 4019664646U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 1920720552;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1761082714656422401ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 12300299576719580326ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 982426921U : 2519126237U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8848742815194954445ULL : 17350266579908441693ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
