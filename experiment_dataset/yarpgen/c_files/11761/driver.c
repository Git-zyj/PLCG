#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5347759213583006633LL;
unsigned int var_6 = 4271719664U;
long long int var_7 = -8000490686545954542LL;
unsigned long long int var_11 = 12747585967185036127ULL;
int zero = 0;
unsigned long long int var_15 = 13255405624552810327ULL;
long long int var_16 = -3691772828895262121LL;
long long int var_17 = 8304464766763572716LL;
unsigned long long int var_18 = 2270180366357112228ULL;
int var_19 = -1716955554;
unsigned int arr_0 [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3770900722U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1822851082;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
