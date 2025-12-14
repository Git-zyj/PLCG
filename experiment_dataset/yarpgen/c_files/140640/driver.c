#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3031366548U;
unsigned char var_1 = (unsigned char)217;
unsigned long long int var_3 = 15323811606699527650ULL;
unsigned long long int var_5 = 10747287065072267150ULL;
short var_8 = (short)-26150;
unsigned long long int var_9 = 5304094432730469101ULL;
unsigned char var_10 = (unsigned char)108;
signed char var_11 = (signed char)71;
signed char var_12 = (signed char)-32;
int zero = 0;
unsigned long long int var_15 = 10151080506011717055ULL;
unsigned long long int var_16 = 4626280109542855632ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6740526002146036046LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-25;
unsigned long long int var_22 = 678770726055931360ULL;
unsigned long long int var_23 = 8613283335186516185ULL;
signed char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 14975576747724330038ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
