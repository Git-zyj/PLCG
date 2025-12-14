#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 207700624830365710ULL;
short var_1 = (short)-22627;
int var_3 = -566037197;
signed char var_4 = (signed char)-91;
signed char var_5 = (signed char)-127;
short var_14 = (short)32019;
unsigned long long int var_15 = 8589364665840880866ULL;
long long int var_17 = 5493257929193143820LL;
int zero = 0;
short var_18 = (short)8041;
unsigned long long int var_19 = 4965958126452634067ULL;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = 1367434226622986675LL;
unsigned short var_22 = (unsigned short)5755;
signed char var_23 = (signed char)-3;
short var_24 = (short)20812;
long long int arr_2 [19] ;
int arr_4 [19] ;
int arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -3538218358735968866LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -438568873;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 896722355 : -1130968289;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
