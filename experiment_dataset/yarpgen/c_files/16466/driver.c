#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-34;
unsigned int var_3 = 654501179U;
unsigned int var_4 = 382802918U;
unsigned short var_6 = (unsigned short)43881;
signed char var_7 = (signed char)-16;
signed char var_9 = (signed char)-44;
long long int var_11 = 5795134083169390222LL;
signed char var_12 = (signed char)121;
long long int var_13 = 5201489791660327478LL;
unsigned char var_15 = (unsigned char)114;
int zero = 0;
long long int var_16 = 3222105957107008960LL;
long long int var_17 = -1771659688299937104LL;
short var_18 = (short)-7603;
unsigned int var_19 = 466239870U;
unsigned short var_20 = (unsigned short)2103;
unsigned short var_21 = (unsigned short)7456;
unsigned int var_22 = 4290361863U;
unsigned short arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
short arr_2 [19] [19] ;
long long int arr_3 [19] [19] ;
short arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8482;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-10056;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -2235470793990467456LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-16974;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
