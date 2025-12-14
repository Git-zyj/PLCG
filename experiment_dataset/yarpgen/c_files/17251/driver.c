#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56594;
unsigned int var_9 = 3519843523U;
short var_10 = (short)-14935;
long long int var_15 = 3403681847174180169LL;
int zero = 0;
long long int var_17 = -6089822624674158269LL;
unsigned char var_18 = (unsigned char)131;
unsigned char var_19 = (unsigned char)230;
unsigned long long int var_20 = 10503533568269897932ULL;
unsigned long long int var_21 = 9711355436093646761ULL;
unsigned int var_22 = 1185955949U;
signed char var_23 = (signed char)77;
unsigned long long int var_24 = 11104122080573084907ULL;
unsigned long long int arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14987258035583384647ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 486658544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
