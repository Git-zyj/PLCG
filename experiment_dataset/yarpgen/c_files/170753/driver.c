#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)17439;
unsigned long long int var_2 = 5944680523549824995ULL;
int var_3 = 6622355;
int var_4 = -221918229;
unsigned long long int var_5 = 6890421012520713834ULL;
signed char var_6 = (signed char)92;
signed char var_7 = (signed char)-112;
signed char var_8 = (signed char)117;
signed char var_9 = (signed char)26;
short var_12 = (short)-29627;
short var_13 = (short)-15894;
int zero = 0;
signed char var_14 = (signed char)-69;
signed char var_15 = (signed char)85;
unsigned int var_16 = 1982954214U;
long long int var_17 = 299540491289398861LL;
long long int var_18 = -2731984637105563466LL;
signed char var_19 = (signed char)99;
signed char arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
int arr_2 [21] ;
short arr_4 [17] ;
unsigned long long int arr_5 [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)42425;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1542039081;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-30252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 10064408892780809184ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -3163886647340991769LL : 9169776130970573738LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
