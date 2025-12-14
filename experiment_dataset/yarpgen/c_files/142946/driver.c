#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4730110032440165982LL;
int var_1 = -1209281012;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3043235489U;
unsigned char var_4 = (unsigned char)192;
unsigned char var_8 = (unsigned char)216;
long long int var_11 = 1815372453235017327LL;
unsigned short var_12 = (unsigned short)65440;
long long int var_14 = 8311494974566283125LL;
long long int var_18 = -4764100532243864324LL;
int zero = 0;
unsigned long long int var_19 = 3501841797737069209ULL;
unsigned int var_20 = 3486404863U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-49;
long long int var_23 = -3707178503272039633LL;
unsigned char var_24 = (unsigned char)79;
unsigned char var_25 = (unsigned char)248;
unsigned short arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)15537;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6161892492935127672ULL : 17986436575982033975ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)13388;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
