#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
unsigned long long int var_3 = 15394192942210961049ULL;
int var_4 = -1437200140;
long long int var_5 = -1753274862395807296LL;
int var_9 = 420416792;
int var_10 = 883306866;
int var_12 = 1027291528;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-76;
unsigned int var_15 = 1023672883U;
unsigned long long int var_16 = 14028146359663376548ULL;
unsigned int var_17 = 290104823U;
signed char var_18 = (signed char)46;
long long int var_19 = 8629260535249669368LL;
_Bool var_20 = (_Bool)1;
int arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
unsigned int arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 385826889;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1807672399U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
