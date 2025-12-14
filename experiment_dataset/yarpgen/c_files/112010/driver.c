#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51339;
unsigned int var_2 = 1054173825U;
long long int var_5 = 8273949892990450671LL;
unsigned char var_6 = (unsigned char)110;
unsigned char var_7 = (unsigned char)177;
unsigned short var_8 = (unsigned short)22370;
signed char var_9 = (signed char)73;
unsigned int var_10 = 3599450024U;
int zero = 0;
int var_11 = -2120290401;
int var_12 = 2050627915;
unsigned int var_13 = 583381451U;
signed char var_14 = (signed char)-39;
unsigned short var_15 = (unsigned short)54278;
unsigned char var_16 = (unsigned char)116;
long long int var_17 = -1773905516163724995LL;
long long int var_18 = -5126120471727591369LL;
unsigned int var_19 = 1722712750U;
unsigned short var_20 = (unsigned short)27038;
unsigned char var_21 = (unsigned char)200;
signed char var_22 = (signed char)-105;
unsigned short var_23 = (unsigned short)3451;
unsigned int var_24 = 1346682856U;
unsigned char var_25 = (unsigned char)136;
unsigned char var_26 = (unsigned char)49;
unsigned short var_27 = (unsigned short)27088;
unsigned char arr_0 [20] ;
unsigned char arr_3 [20] ;
unsigned int arr_5 [20] ;
long long int arr_7 [20] [20] ;
unsigned short arr_13 [20] [20] [20] [20] ;
unsigned int arr_22 [20] [20] [20] ;
signed char arr_24 [20] [20] [20] [20] [20] ;
unsigned char arr_27 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 4292115298U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -3068812635031757974LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47749;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 2695166762U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned char)201;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
