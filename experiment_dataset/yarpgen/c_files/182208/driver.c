#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13841;
long long int var_1 = 5329484682053208214LL;
signed char var_7 = (signed char)98;
unsigned char var_16 = (unsigned char)59;
short var_18 = (short)-28169;
int zero = 0;
unsigned int var_20 = 3769514176U;
unsigned long long int var_21 = 12528438007732315284ULL;
unsigned short var_22 = (unsigned short)25738;
signed char var_23 = (signed char)-33;
unsigned long long int var_24 = 16183857312700108231ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)129;
short var_27 = (short)23378;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)239;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
