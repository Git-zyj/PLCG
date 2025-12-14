#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58314;
unsigned char var_1 = (unsigned char)158;
unsigned char var_2 = (unsigned char)163;
unsigned short var_3 = (unsigned short)64887;
unsigned long long int var_4 = 3517724017456074206ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)83;
int var_10 = -414602168;
unsigned char var_12 = (unsigned char)224;
unsigned long long int var_14 = 11595454175040792490ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)179;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)200;
int zero = 0;
short var_20 = (short)-24227;
unsigned int var_21 = 1294700842U;
unsigned short var_22 = (unsigned short)39947;
unsigned short var_23 = (unsigned short)54971;
short var_24 = (short)-26542;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
_Bool arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
