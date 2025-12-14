#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4941595332837374804LL;
long long int var_1 = 1763012955070001868LL;
unsigned short var_4 = (unsigned short)9931;
unsigned short var_5 = (unsigned short)9842;
int var_7 = 1747549119;
int var_8 = -1482847879;
unsigned long long int var_10 = 2349444633456650195ULL;
long long int var_13 = -3336645868013642262LL;
unsigned char var_14 = (unsigned char)109;
unsigned short var_15 = (unsigned short)3630;
int zero = 0;
unsigned char var_17 = (unsigned char)122;
long long int var_18 = 8736641113964692250LL;
int var_19 = 1435687728;
unsigned long long int var_20 = 2946015959319699286ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)31175;
signed char arr_1 [18] ;
_Bool arr_3 [18] ;
signed char arr_5 [21] ;
unsigned long long int arr_10 [21] ;
signed char arr_4 [18] ;
long long int arr_16 [21] [21] [21] [21] [21] ;
unsigned long long int arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 13049504130134350527ULL : 11567919755740171756ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 6994233522399423358LL : 1295554851612578156LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 916329102992844818ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
