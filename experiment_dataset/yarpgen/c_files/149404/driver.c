#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned short var_1 = (unsigned short)2547;
signed char var_2 = (signed char)119;
signed char var_3 = (signed char)43;
unsigned char var_5 = (unsigned char)14;
int var_7 = 1197983298;
int var_10 = 1173398180;
int var_11 = -1952818516;
int zero = 0;
unsigned short var_12 = (unsigned short)15238;
unsigned short var_13 = (unsigned short)50966;
unsigned short var_14 = (unsigned short)52572;
long long int var_15 = 9085691694725651201LL;
unsigned long long int var_16 = 16518364083759948417ULL;
unsigned char var_17 = (unsigned char)141;
long long int var_18 = 1705865413939387724LL;
_Bool var_19 = (_Bool)0;
int var_20 = -1585365583;
int var_21 = 118970113;
short var_22 = (short)-31757;
unsigned short var_23 = (unsigned short)19856;
int var_24 = 1960168356;
unsigned short var_25 = (unsigned short)54567;
unsigned long long int var_26 = 14409892213860520635ULL;
int var_27 = -777103789;
long long int var_28 = 4680387401617250139LL;
signed char var_29 = (signed char)-52;
long long int var_30 = -2905521030398233965LL;
int var_31 = 1419659193;
short arr_2 [10] [10] ;
int arr_5 [10] [10] [10] [10] ;
long long int arr_6 [10] ;
unsigned char arr_9 [10] [10] [10] [10] ;
unsigned long long int arr_14 [10] [10] [10] [10] ;
_Bool arr_29 [17] ;
int arr_30 [17] ;
unsigned long long int arr_31 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)9865;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2027548537;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1417247927943052458LL : 364039708776040266LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)53 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 13591678916607961387ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = 1402251215;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = 6145164340346855837ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
