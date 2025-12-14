#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1616453163;
short var_2 = (short)-4852;
short var_4 = (short)6655;
unsigned long long int var_8 = 17329376880250224925ULL;
unsigned char var_10 = (unsigned char)126;
unsigned short var_11 = (unsigned short)53958;
short var_15 = (short)-7086;
int zero = 0;
unsigned long long int var_19 = 12861010462596580293ULL;
unsigned char var_20 = (unsigned char)182;
signed char var_21 = (signed char)-29;
signed char var_22 = (signed char)57;
signed char var_23 = (signed char)-100;
unsigned short var_24 = (unsigned short)14944;
_Bool var_25 = (_Bool)1;
signed char arr_5 [15] [15] [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)62 : (unsigned char)188;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
