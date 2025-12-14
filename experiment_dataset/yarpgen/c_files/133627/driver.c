#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6393611131752302440ULL;
signed char var_2 = (signed char)31;
signed char var_7 = (signed char)125;
int var_8 = 1271899403;
unsigned char var_10 = (unsigned char)148;
signed char var_12 = (signed char)104;
int var_17 = -76989878;
unsigned int var_18 = 264931935U;
int zero = 0;
unsigned short var_19 = (unsigned short)5199;
int var_20 = 1786097803;
int var_21 = -926291033;
unsigned char var_22 = (unsigned char)83;
int var_23 = -1565442726;
unsigned char arr_0 [21] [21] ;
short arr_1 [21] ;
unsigned long long int arr_9 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)16482;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 11210470323532209610ULL;
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
