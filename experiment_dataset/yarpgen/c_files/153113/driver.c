#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
short var_2 = (short)-2858;
unsigned char var_4 = (unsigned char)16;
unsigned short var_9 = (unsigned short)10756;
signed char var_10 = (signed char)-49;
unsigned char var_13 = (unsigned char)133;
unsigned char var_14 = (unsigned char)181;
signed char var_16 = (signed char)-109;
unsigned char var_17 = (unsigned char)112;
signed char var_18 = (signed char)-114;
signed char var_19 = (signed char)111;
int zero = 0;
short var_20 = (short)8139;
unsigned short var_21 = (unsigned short)8937;
unsigned char var_22 = (unsigned char)176;
unsigned short var_23 = (unsigned short)10829;
unsigned char var_24 = (unsigned char)237;
signed char arr_1 [24] [24] ;
signed char arr_3 [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)183;
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
