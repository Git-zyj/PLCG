#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
signed char var_6 = (signed char)-44;
unsigned int var_11 = 105571693U;
unsigned long long int var_12 = 942562764958108355ULL;
signed char var_14 = (signed char)17;
long long int var_15 = -3363861262181629063LL;
signed char var_16 = (signed char)67;
unsigned long long int var_17 = 2949321083841917212ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)17;
signed char var_21 = (signed char)-1;
unsigned int var_22 = 924768789U;
signed char var_23 = (signed char)-70;
unsigned long long int var_24 = 274999626869309546ULL;
signed char var_25 = (signed char)61;
long long int arr_4 [16] [16] [16] ;
unsigned long long int arr_6 [21] [21] ;
unsigned char arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8585265757698103017LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 13173704222619477742ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)66;
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
