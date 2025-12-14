#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3127248464439850387LL;
unsigned int var_3 = 3938378961U;
long long int var_6 = 7401722037897755510LL;
int var_7 = -1749153591;
long long int var_8 = -2656318974761039785LL;
long long int var_10 = -7788906120974563682LL;
unsigned int var_12 = 3169164749U;
long long int var_13 = 5386612984965307384LL;
long long int var_14 = 574354419386641020LL;
unsigned char var_15 = (unsigned char)95;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
unsigned char var_18 = (unsigned char)25;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)78;
short var_21 = (short)19874;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
