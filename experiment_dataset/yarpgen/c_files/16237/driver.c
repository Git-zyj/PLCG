#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
unsigned char var_4 = (unsigned char)227;
signed char var_5 = (signed char)-18;
long long int var_6 = -4539413519431531358LL;
int var_9 = -1846171857;
int zero = 0;
unsigned char var_10 = (unsigned char)108;
long long int var_11 = 5955927910630799517LL;
long long int var_12 = 2551368614729544599LL;
unsigned short var_13 = (unsigned short)38248;
unsigned char var_14 = (unsigned char)165;
long long int arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1369378629489779976LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
