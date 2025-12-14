#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 221050026;
int var_1 = -323972359;
signed char var_2 = (signed char)-93;
unsigned long long int var_3 = 9067355009627123983ULL;
signed char var_4 = (signed char)101;
signed char var_5 = (signed char)-110;
_Bool var_6 = (_Bool)0;
int var_7 = 235002381;
unsigned long long int var_10 = 9060271623454016349ULL;
unsigned int var_12 = 1957497067U;
unsigned int var_13 = 2091532957U;
unsigned char var_14 = (unsigned char)53;
unsigned long long int var_15 = 12469118445245761913ULL;
int zero = 0;
unsigned long long int var_17 = 16519714663487711452ULL;
unsigned short var_18 = (unsigned short)62663;
int var_19 = 647358020;
unsigned short var_20 = (unsigned short)42477;
unsigned long long int var_21 = 12107337981111632157ULL;
unsigned short var_22 = (unsigned short)36019;
int var_23 = -776405788;
unsigned long long int var_24 = 8646174100640755294ULL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)107;
unsigned short arr_0 [22] [22] ;
long long int arr_6 [22] ;
unsigned char arr_14 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)2268;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 8454469295481106141LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)182;
}

void checksum() {
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
