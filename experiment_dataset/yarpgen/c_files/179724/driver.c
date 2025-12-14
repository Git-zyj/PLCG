#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6464509724859431721LL;
unsigned char var_1 = (unsigned char)90;
unsigned int var_4 = 4201083291U;
int var_6 = -1868474364;
unsigned short var_7 = (unsigned short)27946;
int var_9 = -377638821;
short var_10 = (short)-5507;
int var_11 = -834427973;
signed char var_13 = (signed char)5;
unsigned char var_15 = (unsigned char)65;
unsigned int var_16 = 3219120560U;
int zero = 0;
long long int var_17 = -6884626043376609695LL;
unsigned long long int var_18 = 4382566373480816962ULL;
int var_19 = -1834113435;
long long int var_20 = 6827673115446575399LL;
signed char var_21 = (signed char)-79;
unsigned int var_22 = 3760942309U;
signed char arr_2 [25] [25] [25] ;
short arr_3 [25] ;
int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-15377;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 184024639;
}

void checksum() {
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
