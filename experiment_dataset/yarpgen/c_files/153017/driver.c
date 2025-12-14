#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)91;
signed char var_1 = (signed char)20;
int var_2 = -1650184914;
unsigned char var_6 = (unsigned char)245;
long long int var_7 = 6572998833182037292LL;
signed char var_8 = (signed char)87;
long long int var_10 = 3105130626864098190LL;
int zero = 0;
unsigned long long int var_12 = 7963372127132140890ULL;
long long int var_13 = -8480279289069230956LL;
short var_14 = (short)-24698;
signed char var_15 = (signed char)-73;
short var_16 = (short)9798;
signed char var_17 = (signed char)-54;
long long int var_18 = 371882333752531418LL;
unsigned int var_19 = 1291201070U;
unsigned int var_20 = 610592757U;
int var_21 = -2008299875;
signed char var_22 = (signed char)-101;
unsigned char arr_9 [21] [21] [21] [21] [21] ;
unsigned int arr_16 [18] ;
short arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 3999397727U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (short)26275;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
