#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 152637013U;
unsigned long long int var_7 = 9001058324621618143ULL;
long long int var_8 = -2066665735360152107LL;
signed char var_9 = (signed char)118;
int zero = 0;
unsigned int var_12 = 4137057065U;
unsigned long long int var_13 = 8614238216159433832ULL;
unsigned char var_14 = (unsigned char)91;
unsigned char var_15 = (unsigned char)124;
unsigned char var_16 = (unsigned char)32;
unsigned long long int var_17 = 11620388292719408023ULL;
long long int var_18 = 1799201091375923627LL;
signed char arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -6913798851657630490LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 369426900U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
