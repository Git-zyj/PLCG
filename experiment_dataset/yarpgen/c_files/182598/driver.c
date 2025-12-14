#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 5453589930618093426LL;
unsigned char var_11 = (unsigned char)23;
unsigned long long int var_13 = 5293449278827633505ULL;
long long int var_15 = 1025306373771328556LL;
int zero = 0;
signed char var_16 = (signed char)-50;
long long int var_17 = 888332536729218630LL;
unsigned long long int var_18 = 5801132032257330852ULL;
unsigned int arr_1 [21] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3519446008U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)34;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
