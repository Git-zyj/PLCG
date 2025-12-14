#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4414909135606107934LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)19;
unsigned char var_6 = (unsigned char)226;
short var_7 = (short)31438;
short var_8 = (short)-27131;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-124;
unsigned short var_11 = (unsigned short)34556;
unsigned long long int var_12 = 3747835434285445860ULL;
short var_13 = (short)-6253;
unsigned int var_14 = 2365238008U;
unsigned char var_15 = (unsigned char)170;
unsigned char arr_1 [25] ;
unsigned long long int arr_3 [25] ;
unsigned char arr_5 [25] ;
_Bool arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 15447529018524073143ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
