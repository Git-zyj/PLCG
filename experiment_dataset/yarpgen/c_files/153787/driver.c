#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6315;
short var_8 = (short)-12776;
long long int var_9 = -4043649684495459970LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 11944732063505297030ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 11564542013346424115ULL;
int zero = 0;
long long int var_18 = -3188369863087474168LL;
unsigned short var_19 = (unsigned short)44630;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4639124183634160810LL;
unsigned long long int var_22 = 9009934522510441039ULL;
int var_23 = -525723933;
unsigned char arr_1 [22] ;
unsigned short arr_2 [22] [22] ;
unsigned short arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)15631;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)61062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 4107920073U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
