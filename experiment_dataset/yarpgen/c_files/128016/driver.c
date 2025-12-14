#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9361112425834814332ULL;
unsigned long long int var_2 = 2348793367539289784ULL;
signed char var_3 = (signed char)5;
int var_5 = -719088555;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_8 = (short)19919;
long long int var_9 = -5866026770122411362LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)14906;
unsigned short var_12 = (unsigned short)14024;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)19868;
signed char var_16 = (signed char)60;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-31133;
long long int var_19 = 4515282140670182174LL;
unsigned int var_20 = 1447456955U;
unsigned char var_21 = (unsigned char)225;
unsigned char var_22 = (unsigned char)142;
signed char var_23 = (signed char)-2;
unsigned char var_24 = (unsigned char)121;
unsigned short var_25 = (unsigned short)5619;
long long int var_26 = -5153548879114928545LL;
signed char var_27 = (signed char)-76;
unsigned int var_28 = 905990823U;
int var_29 = 206186231;
int arr_20 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 819860578 : 1258023546;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
