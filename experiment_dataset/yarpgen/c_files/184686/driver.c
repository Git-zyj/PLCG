#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5069102377003700625ULL;
short var_3 = (short)8135;
signed char var_7 = (signed char)99;
unsigned char var_9 = (unsigned char)77;
signed char var_12 = (signed char)-113;
int var_15 = 560836444;
short var_17 = (short)-16301;
unsigned int var_18 = 1117442206U;
int zero = 0;
short var_19 = (short)-27872;
int var_20 = -977240773;
unsigned short var_21 = (unsigned short)34606;
unsigned long long int var_22 = 6011564128917955433ULL;
long long int var_23 = -4539201359694983038LL;
short var_24 = (short)-5441;
unsigned long long int var_25 = 5462238734527201584ULL;
int var_26 = 770046050;
short arr_1 [18] ;
unsigned long long int arr_4 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-22416;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 17539398418522213107ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
