#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22908;
unsigned int var_3 = 646797093U;
unsigned char var_4 = (unsigned char)155;
int var_7 = -471735479;
unsigned char var_8 = (unsigned char)53;
unsigned int var_11 = 2590371430U;
long long int var_12 = 427282629402658632LL;
long long int var_14 = -1187063482827698332LL;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
unsigned int var_18 = 280056097U;
unsigned long long int var_19 = 11886403163452215274ULL;
signed char var_20 = (signed char)-23;
unsigned short arr_0 [25] [25] ;
unsigned int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)14159 : (unsigned short)40040;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3116187012U;
}

void checksum() {
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
