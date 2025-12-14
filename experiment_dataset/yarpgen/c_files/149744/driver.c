#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3914439484250383342ULL;
signed char var_1 = (signed char)95;
long long int var_2 = 3236677175963231949LL;
unsigned long long int var_3 = 16092008389428683550ULL;
unsigned long long int var_5 = 963162277000047778ULL;
unsigned int var_6 = 3995393365U;
unsigned int var_8 = 3231739243U;
unsigned long long int var_9 = 16365485289597849923ULL;
short var_10 = (short)3505;
int zero = 0;
signed char var_12 = (signed char)24;
signed char var_13 = (signed char)-9;
signed char var_14 = (signed char)-12;
unsigned int var_15 = 2451642308U;
long long int var_16 = 3317972739681291922LL;
unsigned int var_17 = 285767554U;
int var_18 = 815520621;
unsigned long long int var_19 = 3850914529840054079ULL;
unsigned char var_20 = (unsigned char)13;
_Bool var_21 = (_Bool)1;
int var_22 = -1528663330;
long long int var_23 = -2207093595807517197LL;
unsigned int var_24 = 1700553681U;
unsigned long long int var_25 = 4183556715018729961ULL;
unsigned long long int arr_0 [20] [20] ;
unsigned int arr_2 [20] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned short arr_7 [24] [24] ;
_Bool arr_8 [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] ;
int arr_11 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_13 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1679013787988353251ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4252630118U : 1135158955U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 10942601656868178787ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 17298959106502399854ULL : 8065286133789579138ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)19268;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 400675820739801114ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 312211774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1875278321U : 2725626522U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
