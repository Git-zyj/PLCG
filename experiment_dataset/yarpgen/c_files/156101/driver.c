#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
unsigned int var_7 = 3203933240U;
long long int var_8 = -5054206049270921961LL;
long long int var_16 = -7426167556926414145LL;
long long int var_18 = 3201129204620439477LL;
int zero = 0;
unsigned int var_19 = 4032432647U;
unsigned int var_20 = 384370282U;
unsigned int var_21 = 3137250248U;
unsigned char var_22 = (unsigned char)189;
short var_23 = (short)30797;
signed char var_24 = (signed char)-14;
long long int arr_0 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -2781791216533814104LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)195;
}

void checksum() {
    hash(&seed, var_19);
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
