#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2656202777480235846LL;
unsigned long long int var_1 = 15786345486449217456ULL;
long long int var_2 = 9004986386728524562LL;
signed char var_5 = (signed char)50;
long long int var_6 = -5804305295380183248LL;
unsigned int var_8 = 1208691929U;
unsigned long long int var_9 = 10864022139560539076ULL;
short var_11 = (short)-16644;
short var_13 = (short)-2600;
unsigned int var_14 = 266547994U;
signed char var_15 = (signed char)-39;
int zero = 0;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)22680;
unsigned char var_20 = (unsigned char)200;
unsigned long long int var_21 = 12155344407294540206ULL;
unsigned long long int var_22 = 3363521865959526025ULL;
unsigned short var_23 = (unsigned short)22198;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 18225421505539373811ULL;
long long int var_26 = -5370756804610247402LL;
unsigned int var_27 = 2951588787U;
long long int var_28 = 1878114176714541065LL;
unsigned long long int var_29 = 10969580857923201301ULL;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-68;
signed char var_32 = (signed char)-73;
_Bool arr_0 [17] ;
_Bool arr_5 [17] [17] [17] ;
short arr_6 [17] [17] [17] ;
unsigned char arr_7 [17] [17] [17] [17] ;
short arr_10 [17] [17] [17] [17] [17] ;
unsigned int arr_11 [17] [17] [17] [17] [17] ;
signed char arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)11794;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-30812;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 802846845U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)116;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
