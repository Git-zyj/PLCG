#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
long long int var_1 = -6137304499909179094LL;
unsigned int var_3 = 1051741187U;
long long int var_4 = -5156328593594687589LL;
signed char var_5 = (signed char)-40;
unsigned int var_7 = 2802827555U;
unsigned int var_8 = 492203567U;
signed char var_9 = (signed char)95;
unsigned long long int var_11 = 14557542758081832580ULL;
signed char var_12 = (signed char)10;
long long int var_13 = 4643142768110990312LL;
int zero = 0;
short var_15 = (short)27093;
short var_16 = (short)9302;
unsigned char var_17 = (unsigned char)46;
unsigned long long int var_18 = 5833433051339123567ULL;
short var_19 = (short)-3824;
short var_20 = (short)-30412;
short arr_5 [20] ;
unsigned int arr_9 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)-25390;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 1359389893U;
}

void checksum() {
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
