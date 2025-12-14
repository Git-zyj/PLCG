#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24463;
int var_6 = -430992007;
short var_7 = (short)12874;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)14;
signed char var_10 = (signed char)46;
_Bool var_13 = (_Bool)0;
int var_14 = -1611430272;
unsigned char var_16 = (unsigned char)148;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8681938257103971673LL;
int zero = 0;
long long int var_19 = -2891236915083933608LL;
unsigned char var_20 = (unsigned char)202;
long long int var_21 = 2280375656694834076LL;
unsigned char var_22 = (unsigned char)103;
unsigned short var_23 = (unsigned short)64244;
long long int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -2595466631730358328LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
