#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 124007218239550112ULL;
int var_1 = -1085019657;
unsigned int var_2 = 2871012629U;
int var_4 = 1020759297;
unsigned char var_7 = (unsigned char)139;
int var_8 = 1282970107;
unsigned long long int var_9 = 3977156689040278933ULL;
unsigned long long int var_10 = 4313146281278013470ULL;
unsigned long long int var_13 = 11504446587701982905ULL;
short var_14 = (short)-10982;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)57768;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-7967;
unsigned int var_19 = 2583793420U;
unsigned short var_20 = (unsigned short)5512;
unsigned long long int var_21 = 16527361193821143919ULL;
long long int var_22 = -31986131496822278LL;
long long int arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
_Bool arr_2 [25] ;
int arr_5 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -8908097290369080914LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)58928;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 990761888;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-127;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
