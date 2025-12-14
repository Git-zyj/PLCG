#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1998797007U;
unsigned char var_2 = (unsigned char)246;
unsigned int var_3 = 3084104839U;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)27577;
signed char var_10 = (signed char)126;
unsigned char var_11 = (unsigned char)65;
int zero = 0;
unsigned long long int var_13 = 6667228857695612928ULL;
unsigned char var_14 = (unsigned char)78;
unsigned long long int var_15 = 15442733377940881182ULL;
unsigned short var_16 = (unsigned short)57399;
long long int var_17 = -4390349737965772981LL;
signed char var_18 = (signed char)-95;
unsigned char var_19 = (unsigned char)85;
short var_20 = (short)23591;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_3 [20] ;
unsigned int arr_7 [20] [20] ;
unsigned short arr_10 [20] [20] ;
signed char arr_11 [20] [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] [20] [20] [20] ;
_Bool arr_15 [18] ;
signed char arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 10626978656602956494ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 13041562350924346847ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 1316032370U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)36913;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1558060088851567411ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)-19 : (signed char)-74;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
