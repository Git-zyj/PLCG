#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16613;
int var_2 = 1939086628;
unsigned char var_3 = (unsigned char)138;
short var_4 = (short)18728;
short var_6 = (short)-10486;
unsigned char var_7 = (unsigned char)158;
int var_8 = -426690847;
unsigned char var_9 = (unsigned char)150;
short var_10 = (short)28792;
short var_11 = (short)-20301;
int var_12 = -1970732151;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
short var_14 = (short)-16953;
unsigned char var_15 = (unsigned char)154;
unsigned char var_16 = (unsigned char)106;
unsigned char var_17 = (unsigned char)126;
short var_18 = (short)-3510;
unsigned char var_19 = (unsigned char)184;
short var_20 = (short)-24863;
int arr_1 [10] ;
unsigned char arr_5 [10] [10] [10] [10] ;
unsigned char arr_6 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1738068159;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)31;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
