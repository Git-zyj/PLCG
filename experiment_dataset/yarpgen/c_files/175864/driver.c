#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35872;
long long int var_1 = -3925090796670121719LL;
signed char var_2 = (signed char)29;
short var_3 = (short)-25377;
unsigned int var_4 = 3862377137U;
unsigned long long int var_6 = 5888178199352487645ULL;
unsigned int var_7 = 1144129919U;
unsigned short var_8 = (unsigned short)45389;
signed char var_10 = (signed char)-46;
signed char var_11 = (signed char)-9;
long long int var_12 = 7194855750197715672LL;
short var_14 = (short)-29940;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)177;
unsigned char var_18 = (unsigned char)89;
int zero = 0;
unsigned char var_19 = (unsigned char)254;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)11;
short var_22 = (short)-16265;
short var_23 = (short)32439;
unsigned char var_24 = (unsigned char)153;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
