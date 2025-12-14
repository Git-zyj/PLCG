#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 882292427;
unsigned long long int var_1 = 678480822886294429ULL;
int var_2 = 153935770;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-108;
unsigned short var_6 = (unsigned short)34669;
int var_9 = -524495994;
int var_13 = 1620015860;
signed char var_16 = (signed char)6;
int var_17 = -10651941;
int zero = 0;
long long int var_18 = 7474620610140078966LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-22;
short var_21 = (short)-15304;
unsigned char var_22 = (unsigned char)21;
unsigned char var_23 = (unsigned char)3;
int var_24 = -351272168;
unsigned long long int var_25 = 16520808084501997934ULL;
unsigned long long int arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
signed char arr_3 [20] ;
unsigned char arr_5 [20] ;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 12484801786313632785ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)2468;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
