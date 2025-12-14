#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 591321269U;
unsigned short var_1 = (unsigned short)44082;
unsigned int var_4 = 142673080U;
unsigned int var_6 = 3903669060U;
unsigned int var_7 = 400971772U;
_Bool var_8 = (_Bool)1;
int var_9 = 2121994302;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -4567734857676490407LL;
signed char var_12 = (signed char)-47;
short var_13 = (short)32754;
unsigned int var_14 = 4175670612U;
unsigned int var_15 = 3795898931U;
unsigned int var_16 = 1918847625U;
unsigned int var_17 = 1752199072U;
signed char arr_0 [24] [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12504257972408188778ULL : 12128133898089508729ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
