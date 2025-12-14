#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3166460530151202807LL;
long long int var_2 = -6945444100302570959LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 563512124U;
long long int var_8 = 1049356784399569755LL;
unsigned short var_10 = (unsigned short)45504;
unsigned int var_11 = 310448759U;
int zero = 0;
signed char var_16 = (signed char)-95;
unsigned char var_17 = (unsigned char)228;
long long int var_18 = 8014583655941213230LL;
signed char var_19 = (signed char)-104;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)18;
short var_22 = (short)12359;
_Bool var_23 = (_Bool)0;
unsigned int arr_6 [22] ;
long long int arr_21 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1749085326U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = -3624004784094680614LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
