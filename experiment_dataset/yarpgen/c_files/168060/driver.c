#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 141890985161071288ULL;
long long int var_7 = -6949564135821883119LL;
int var_8 = 228994162;
unsigned long long int var_13 = 3003336734549433579ULL;
int zero = 0;
signed char var_16 = (signed char)115;
unsigned char var_17 = (unsigned char)188;
unsigned short var_18 = (unsigned short)41670;
unsigned short var_19 = (unsigned short)38623;
int var_20 = -752157009;
unsigned long long int var_21 = 9198972450322273592ULL;
unsigned int var_22 = 2381591209U;
short arr_2 [24] ;
unsigned char arr_3 [24] [24] ;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)25804;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2022528655219342871LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
