#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_3 = (signed char)-123;
signed char var_8 = (signed char)-1;
signed char var_10 = (signed char)-89;
unsigned char var_11 = (unsigned char)17;
unsigned char var_12 = (unsigned char)7;
signed char var_14 = (signed char)-77;
int zero = 0;
unsigned long long int var_16 = 9065309042113919345ULL;
unsigned long long int var_17 = 14207291469165861635ULL;
unsigned char var_18 = (unsigned char)51;
signed char var_19 = (signed char)-50;
unsigned char var_20 = (unsigned char)92;
signed char var_21 = (signed char)102;
unsigned char arr_0 [24] ;
signed char arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
