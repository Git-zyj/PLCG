#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 49991454U;
unsigned char var_4 = (unsigned char)59;
short var_5 = (short)3495;
unsigned short var_7 = (unsigned short)47284;
long long int var_13 = 1735232472710441119LL;
int zero = 0;
unsigned char var_18 = (unsigned char)186;
int var_19 = -689294618;
long long int var_20 = -1498733006810397376LL;
unsigned short var_21 = (unsigned short)64860;
signed char var_22 = (signed char)102;
signed char arr_2 [25] ;
unsigned long long int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 12488769831695557737ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
