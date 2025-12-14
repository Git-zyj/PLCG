#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16225;
short var_4 = (short)3697;
unsigned short var_5 = (unsigned short)32292;
short var_7 = (short)26292;
short var_8 = (short)31018;
short var_9 = (short)4790;
unsigned int var_10 = 2701585583U;
short var_11 = (short)7516;
short var_12 = (short)-18741;
long long int var_13 = 8825009089855528181LL;
_Bool var_15 = (_Bool)0;
int var_16 = -208631982;
int zero = 0;
short var_17 = (short)-15197;
long long int var_18 = 5096560373776050816LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-24623;
short var_21 = (short)27040;
short arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)15202;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
