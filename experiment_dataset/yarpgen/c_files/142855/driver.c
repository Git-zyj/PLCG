#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4977461516817014234LL;
long long int var_1 = -8445410581311947202LL;
unsigned char var_2 = (unsigned char)65;
unsigned long long int var_4 = 13462784930513745227ULL;
long long int var_5 = 6409116524231148139LL;
unsigned char var_6 = (unsigned char)47;
unsigned long long int var_9 = 13063100464459040450ULL;
unsigned long long int var_10 = 338738180160504641ULL;
long long int var_11 = -1008378161645291853LL;
long long int var_13 = -1100955851491777931LL;
int zero = 0;
long long int var_14 = 1607835071067329085LL;
long long int var_15 = 1791849879053218015LL;
long long int var_16 = 910396134756889291LL;
long long int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
long long int arr_3 [13] ;
long long int arr_4 [13] [13] ;
unsigned char arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 5879187163518677174LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 10380578210131130482ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5135342205786111168LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 5300916528000540418LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
