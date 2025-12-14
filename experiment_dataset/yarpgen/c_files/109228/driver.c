#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
unsigned char var_1 = (unsigned char)247;
unsigned char var_4 = (unsigned char)28;
unsigned char var_5 = (unsigned char)251;
unsigned char var_6 = (unsigned char)108;
signed char var_7 = (signed char)-16;
signed char var_9 = (signed char)114;
unsigned char var_10 = (unsigned char)146;
signed char var_13 = (signed char)115;
signed char var_14 = (signed char)49;
signed char var_15 = (signed char)-120;
signed char var_16 = (signed char)51;
unsigned char var_18 = (unsigned char)150;
unsigned char var_19 = (unsigned char)134;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
unsigned char var_21 = (unsigned char)127;
signed char var_22 = (signed char)-4;
unsigned char var_23 = (unsigned char)226;
signed char var_24 = (signed char)-117;
signed char var_25 = (signed char)105;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] [17] ;
signed char arr_2 [17] [17] ;
signed char arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)4 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-114 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)54;
}

void checksum() {
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
