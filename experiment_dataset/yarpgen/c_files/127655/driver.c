#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9943550775498123383ULL;
unsigned int var_3 = 2148759180U;
int var_4 = 1269084033;
unsigned int var_5 = 910239142U;
unsigned int var_6 = 427974206U;
unsigned int var_7 = 1371894948U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2668316886U;
unsigned int var_11 = 1820014721U;
signed char var_13 = (signed char)37;
unsigned int var_15 = 3295264887U;
int zero = 0;
signed char var_18 = (signed char)-87;
unsigned char var_19 = (unsigned char)32;
unsigned int var_20 = 1350099147U;
unsigned long long int var_21 = 15197013977730424331ULL;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3050168653645720291ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 16188330041264158605ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1692735688435420356ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
