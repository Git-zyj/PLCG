#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -25945975;
unsigned long long int var_2 = 7640343162597103589ULL;
unsigned long long int var_4 = 1005817835839896443ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)65;
unsigned long long int var_10 = 5429495552791194880ULL;
unsigned int var_11 = 22295654U;
signed char var_14 = (signed char)19;
unsigned long long int var_15 = 1181796531832523352ULL;
unsigned char var_17 = (unsigned char)164;
short var_18 = (short)19094;
int zero = 0;
int var_20 = 458422766;
unsigned short var_21 = (unsigned short)22522;
int var_22 = 865924269;
signed char var_23 = (signed char)-110;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
signed char arr_2 [24] [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 16758907631862882353ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 15061562101242449295ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)88 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3843781536U : 1967014118U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
