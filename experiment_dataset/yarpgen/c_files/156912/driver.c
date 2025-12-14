#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
unsigned long long int var_1 = 15301648020156022939ULL;
unsigned int var_2 = 1598111970U;
unsigned short var_4 = (unsigned short)8092;
long long int var_6 = -1538143566836657693LL;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-29704;
int zero = 0;
long long int var_12 = 87047972292160810LL;
unsigned char var_13 = (unsigned char)78;
unsigned short var_14 = (unsigned short)14341;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4948568368945572520ULL;
long long int var_17 = 4154676054613118654LL;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4998944756203302489LL : 277983463046742804LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 819274647U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16870946571027955369ULL : 14360206438023489052ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
