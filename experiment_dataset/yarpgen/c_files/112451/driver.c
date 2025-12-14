#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 8788899832566249799ULL;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)70;
unsigned short var_4 = (unsigned short)8729;
unsigned int var_5 = 3542053450U;
long long int var_6 = 51446930997689228LL;
unsigned long long int var_7 = 2098253740564236187ULL;
unsigned char var_9 = (unsigned char)210;
short var_10 = (short)23013;
unsigned int var_11 = 3864009963U;
int zero = 0;
int var_12 = 692529628;
unsigned long long int var_13 = 10496256666685538211ULL;
unsigned long long int var_14 = 9906919425064237444ULL;
_Bool var_15 = (_Bool)1;
int var_16 = 981930725;
unsigned short var_17 = (unsigned short)42028;
int var_18 = 995752469;
unsigned long long int var_19 = 2032533152048547682ULL;
short var_20 = (short)-18268;
int var_21 = -874155593;
unsigned long long int var_22 = 10104946165713920975ULL;
unsigned int var_23 = 778743108U;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned short arr_16 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -4943164950429725355LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 18075109731847558618ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)43601 : (unsigned short)40188;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
