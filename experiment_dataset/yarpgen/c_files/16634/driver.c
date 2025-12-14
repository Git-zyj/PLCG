#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2984482049290347590LL;
unsigned char var_1 = (unsigned char)61;
long long int var_2 = -4772004016190575490LL;
unsigned char var_3 = (unsigned char)123;
long long int var_4 = 3292567706914473410LL;
unsigned int var_5 = 2341798755U;
unsigned long long int var_6 = 932033928160626827ULL;
int var_7 = 2006116881;
signed char var_8 = (signed char)23;
unsigned int var_9 = 2545152067U;
short var_10 = (short)-1445;
long long int var_11 = 3697636708561035136LL;
signed char var_12 = (signed char)93;
unsigned int var_13 = 1191743207U;
unsigned long long int var_14 = 2159632826068146193ULL;
int zero = 0;
unsigned int var_15 = 334112310U;
signed char var_16 = (signed char)-38;
unsigned short var_17 = (unsigned short)10695;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5975977459069758851LL;
unsigned long long int var_20 = 15389225837130716792ULL;
unsigned char var_21 = (unsigned char)0;
long long int var_22 = 6365872648109089196LL;
signed char arr_0 [13] ;
unsigned short arr_5 [13] [13] [13] ;
signed char arr_6 [13] [13] [13] [13] ;
unsigned char arr_9 [13] [13] [13] [13] ;
unsigned int arr_10 [13] [13] ;
long long int arr_14 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)27339;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 1201029187U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1585032515128329419LL : 5348966541233810942LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
