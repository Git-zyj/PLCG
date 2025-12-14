#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4306103098181813222LL;
long long int var_1 = -5027529737652051392LL;
unsigned long long int var_2 = 9603437249861933675ULL;
unsigned long long int var_3 = 14045476326158948828ULL;
unsigned long long int var_4 = 13928390371833316219ULL;
signed char var_5 = (signed char)99;
long long int var_6 = 8491907675626876957LL;
long long int var_7 = 108183673384374569LL;
int var_8 = 946567151;
unsigned int var_9 = 2323966368U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)130;
unsigned long long int var_12 = 17050659331394551466ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)68;
long long int var_15 = -5512390461071232253LL;
int var_16 = -1422929661;
long long int arr_0 [12] ;
short arr_1 [12] ;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 40622563985786348LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-3301;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)74;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
