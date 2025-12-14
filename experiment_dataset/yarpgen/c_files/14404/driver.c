#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
unsigned short var_3 = (unsigned short)6022;
int var_4 = 655305963;
long long int var_5 = 6955974595878754971LL;
int var_8 = 1275175972;
unsigned short var_9 = (unsigned short)4970;
long long int var_17 = -2844526505024904248LL;
unsigned int var_18 = 2000483952U;
int zero = 0;
signed char var_19 = (signed char)-67;
signed char var_20 = (signed char)-83;
unsigned int var_21 = 53068221U;
unsigned short var_22 = (unsigned short)17742;
signed char var_23 = (signed char)-32;
signed char var_24 = (signed char)79;
unsigned short var_25 = (unsigned short)12006;
long long int var_26 = 2379914878950758376LL;
int var_27 = 1694659763;
unsigned int var_28 = 1826959553U;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] ;
signed char arr_2 [25] ;
long long int arr_4 [12] ;
unsigned short arr_7 [18] ;
signed char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3209416548U : 4282596929U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2041764859U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -5917329934922982591LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)61492;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)-94;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
