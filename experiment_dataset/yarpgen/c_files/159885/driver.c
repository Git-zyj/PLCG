#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8877050374531425718LL;
unsigned char var_2 = (unsigned char)17;
short var_5 = (short)-15041;
long long int var_9 = 318540200313940499LL;
unsigned int var_11 = 1104992642U;
unsigned int var_12 = 1964583987U;
signed char var_13 = (signed char)-57;
long long int var_16 = -7063438187178607668LL;
unsigned char var_17 = (unsigned char)211;
short var_18 = (short)216;
int zero = 0;
long long int var_19 = 7365391659607656414LL;
long long int var_20 = -3292555241267090398LL;
unsigned long long int var_21 = 10059330193506331800ULL;
long long int var_22 = 4465356266651538098LL;
long long int var_23 = -7053975691473123946LL;
signed char arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 16570911777697326138ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
