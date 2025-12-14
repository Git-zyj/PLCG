#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5669354934387725680LL;
signed char var_2 = (signed char)109;
unsigned char var_3 = (unsigned char)188;
signed char var_4 = (signed char)-64;
unsigned long long int var_5 = 17746162399136763312ULL;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_10 = 17566935452992258553ULL;
unsigned char var_11 = (unsigned char)28;
int zero = 0;
short var_13 = (short)-30375;
short var_14 = (short)9999;
unsigned int var_15 = 30281636U;
unsigned long long int var_16 = 9801831901296524166ULL;
signed char arr_0 [25] [25] ;
unsigned int arr_5 [25] ;
unsigned long long int arr_8 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3967116028U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 13433120300284672969ULL : 13779789896072930609ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
