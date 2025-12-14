#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2300391628U;
long long int var_4 = 338630302538356936LL;
unsigned long long int var_5 = 15359083466145097588ULL;
signed char var_6 = (signed char)-40;
short var_7 = (short)-8276;
unsigned char var_10 = (unsigned char)155;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11912438598831209288ULL;
int zero = 0;
unsigned int var_14 = 1672534732U;
unsigned int var_15 = 792975415U;
unsigned long long int var_16 = 8367200846891096943ULL;
_Bool var_17 = (_Bool)1;
unsigned int arr_0 [20] ;
signed char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 815171998U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
