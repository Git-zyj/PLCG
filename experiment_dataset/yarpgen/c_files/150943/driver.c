#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -795094759;
unsigned short var_7 = (unsigned short)5974;
unsigned int var_9 = 1676518833U;
signed char var_10 = (signed char)100;
unsigned char var_11 = (unsigned char)228;
unsigned char var_14 = (unsigned char)150;
unsigned char var_15 = (unsigned char)0;
unsigned int var_18 = 585374563U;
unsigned long long int var_19 = 5092966151949496037ULL;
int zero = 0;
long long int var_20 = -6048749277613871179LL;
long long int var_21 = -8550522944781453352LL;
unsigned short var_22 = (unsigned short)38557;
signed char var_23 = (signed char)-85;
unsigned int var_24 = 3203297010U;
unsigned char var_25 = (unsigned char)56;
signed char var_26 = (signed char)-112;
unsigned char arr_0 [22] [22] ;
_Bool arr_1 [22] ;
unsigned short arr_2 [22] ;
short arr_8 [22] [22] [22] [22] ;
int arr_9 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25878 : (unsigned short)37847;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-21280;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1487941996;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
