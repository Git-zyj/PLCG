#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 360138901194967115ULL;
signed char var_4 = (signed char)46;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)193;
unsigned int var_7 = 3826432558U;
long long int var_8 = 4917833826531256199LL;
unsigned short var_10 = (unsigned short)17927;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)249;
unsigned long long int var_14 = 3422986258359867130ULL;
unsigned int var_15 = 4076797584U;
unsigned int var_16 = 1899827284U;
int var_17 = -589291015;
unsigned char var_18 = (unsigned char)106;
unsigned int var_19 = 1067811359U;
short arr_1 [25] ;
short arr_2 [25] [25] ;
unsigned int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)169;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-20114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1545710929U : 1550119619U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
