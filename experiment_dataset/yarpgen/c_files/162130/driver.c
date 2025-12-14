#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
signed char var_2 = (signed char)60;
signed char var_4 = (signed char)21;
int var_5 = 1526718187;
int var_7 = 1896214710;
unsigned long long int var_8 = 17102955001498996969ULL;
int zero = 0;
unsigned long long int var_10 = 11561601536706909676ULL;
int var_11 = 904315578;
signed char var_12 = (signed char)-76;
int var_13 = -850552735;
long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 5182360991664804230LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1498743287 : -709714042;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
