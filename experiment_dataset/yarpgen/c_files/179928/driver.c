#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
signed char var_1 = (signed char)-12;
unsigned int var_2 = 4101791285U;
unsigned long long int var_5 = 17900060490464637629ULL;
unsigned long long int var_6 = 18084584427625374453ULL;
unsigned long long int var_9 = 3474919522709721889ULL;
long long int var_11 = -2409342586724838621LL;
unsigned short var_12 = (unsigned short)3000;
unsigned long long int var_13 = 17158141909675328739ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)85;
unsigned char var_16 = (unsigned char)152;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)47;
unsigned int var_19 = 198430678U;
unsigned int var_20 = 1834283769U;
int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1384160476;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 18160392614932801758ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
