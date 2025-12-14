#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
signed char var_1 = (signed char)-8;
signed char var_2 = (signed char)9;
unsigned int var_3 = 1232896673U;
unsigned char var_4 = (unsigned char)15;
unsigned long long int var_5 = 9490004573219140836ULL;
signed char var_6 = (signed char)116;
unsigned char var_7 = (unsigned char)84;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2597722043773816135ULL;
int zero = 0;
short var_10 = (short)30554;
unsigned int var_11 = 3160148235U;
unsigned int var_12 = 313945133U;
short var_13 = (short)23926;
long long int var_14 = -4395296711989923661LL;
signed char var_15 = (signed char)-62;
unsigned int var_16 = 3540372202U;
long long int var_17 = -4731104490292880697LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7582400089782051257LL;
unsigned long long int var_20 = 6791717304713226815ULL;
long long int var_21 = -7753246905538103040LL;
short var_22 = (short)31517;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 404548299U;
signed char var_25 = (signed char)-106;
long long int var_26 = 4257186639029938542LL;
int var_27 = 956978243;
short var_28 = (short)19029;
unsigned char arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3380699767U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)19119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)219;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
