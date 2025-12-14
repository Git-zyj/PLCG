#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5685905815675446853ULL;
long long int var_2 = 6448563367903907368LL;
unsigned char var_6 = (unsigned char)67;
signed char var_9 = (signed char)-106;
unsigned int var_11 = 961263367U;
int zero = 0;
int var_12 = -853579248;
unsigned long long int var_13 = 13388683280418785746ULL;
unsigned char var_14 = (unsigned char)35;
unsigned char var_15 = (unsigned char)16;
_Bool var_16 = (_Bool)1;
int arr_2 [25] ;
short arr_3 [25] [25] ;
int arr_4 [25] ;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 884922062;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-10216;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 504706968;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)4;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
