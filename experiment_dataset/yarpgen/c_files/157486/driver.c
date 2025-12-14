#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)189;
signed char var_2 = (signed char)-10;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1280955737U;
short var_5 = (short)27055;
unsigned int var_6 = 1934229410U;
short var_7 = (short)9134;
short var_8 = (short)4244;
unsigned long long int var_9 = 110410307093596038ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)201;
signed char var_12 = (signed char)13;
int zero = 0;
signed char var_13 = (signed char)-34;
long long int var_14 = -3788759972191234263LL;
unsigned int var_15 = 1101600764U;
unsigned short var_16 = (unsigned short)20186;
long long int var_17 = -455548416507299755LL;
unsigned char var_18 = (unsigned char)112;
unsigned short var_19 = (unsigned short)19899;
unsigned int var_20 = 2977073007U;
long long int arr_0 [14] ;
unsigned char arr_2 [14] ;
unsigned int arr_4 [14] ;
short arr_5 [14] ;
long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7714121247519483101LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 892255482U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)26853;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 7402671735588517479LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
