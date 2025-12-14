#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3525026229958731986ULL;
signed char var_13 = (signed char)77;
int zero = 0;
signed char var_17 = (signed char)3;
short var_18 = (short)-16713;
unsigned long long int var_19 = 16321298738422731880ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-1062;
unsigned long long int arr_0 [20] [20] ;
unsigned short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 6831214921614075272ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)8176;
}

void checksum() {
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
