#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5752854834998683739LL;
unsigned short var_2 = (unsigned short)928;
int var_3 = 1701457801;
int var_4 = 982115167;
short var_7 = (short)-30392;
int var_10 = 747219743;
long long int var_12 = -8558296001821753700LL;
long long int var_16 = 6307679618914447750LL;
long long int var_17 = 4713455342011127782LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)243;
_Bool var_20 = (_Bool)0;
int var_21 = -1171462180;
long long int var_22 = -5239215908217519813LL;
unsigned char var_23 = (unsigned char)169;
unsigned int arr_5 [13] [13] [13] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1545386912U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 192257537928530193LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
