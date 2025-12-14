#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -389115100;
long long int var_6 = 5307878895084469141LL;
signed char var_8 = (signed char)13;
unsigned long long int var_10 = 7556045322628885462ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 4036625127U;
short var_15 = (short)17675;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 860772410;
signed char var_20 = (signed char)-90;
signed char var_21 = (signed char)-40;
signed char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-38;
}

void checksum() {
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
