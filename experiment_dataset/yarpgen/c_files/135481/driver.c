#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 686952679;
int var_5 = 963832877;
unsigned char var_10 = (unsigned char)67;
signed char var_14 = (signed char)-74;
unsigned long long int var_16 = 11431350287936326773ULL;
signed char var_18 = (signed char)-127;
int zero = 0;
unsigned long long int var_20 = 4220627281609579186ULL;
unsigned long long int var_21 = 18241959604341280902ULL;
signed char var_22 = (signed char)51;
short var_23 = (short)-17825;
signed char var_24 = (signed char)-51;
short arr_0 [19] ;
long long int arr_1 [19] ;
signed char arr_4 [19] ;
unsigned char arr_2 [19] ;
signed char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)27642;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -479980546908608800LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-105;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
