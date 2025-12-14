#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28897;
long long int var_5 = -1208869576304509595LL;
short var_6 = (short)8927;
unsigned short var_7 = (unsigned short)47770;
unsigned short var_13 = (unsigned short)42656;
unsigned char var_15 = (unsigned char)195;
unsigned short var_17 = (unsigned short)49818;
int zero = 0;
unsigned char var_18 = (unsigned char)165;
int var_19 = -1281375519;
int var_20 = 607375516;
short var_21 = (short)-4821;
long long int var_22 = 4037020379738569272LL;
unsigned short var_23 = (unsigned short)39135;
signed char var_24 = (signed char)27;
signed char arr_0 [21] ;
unsigned int arr_1 [21] ;
signed char arr_2 [25] ;
long long int arr_3 [25] ;
_Bool arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1795825589U : 806568116U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 965009881531200763LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
