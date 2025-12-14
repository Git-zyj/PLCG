#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40725;
signed char var_3 = (signed char)104;
signed char var_6 = (signed char)-84;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3668765976354961233LL;
long long int var_15 = 6089040966252962788LL;
int zero = 0;
signed char var_20 = (signed char)53;
unsigned short var_21 = (unsigned short)11829;
long long int var_22 = 45555723277647379LL;
signed char var_23 = (signed char)-54;
unsigned long long int var_24 = 9683861640177686568ULL;
_Bool arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)64164;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
