#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49927;
unsigned int var_2 = 1648553160U;
unsigned int var_3 = 884919848U;
unsigned char var_4 = (unsigned char)204;
short var_6 = (short)-19690;
_Bool var_8 = (_Bool)0;
long long int var_12 = -5288665780743156942LL;
int zero = 0;
unsigned long long int var_14 = 15459542116852501370ULL;
signed char var_15 = (signed char)118;
_Bool var_16 = (_Bool)0;
short var_17 = (short)3304;
signed char var_18 = (signed char)-106;
long long int var_19 = 6015031339752937038LL;
signed char arr_0 [17] ;
unsigned short arr_3 [17] ;
unsigned short arr_6 [17] [17] ;
unsigned char arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)9280;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)30554;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
