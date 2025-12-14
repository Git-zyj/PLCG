#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5609434589447380004LL;
unsigned char var_3 = (unsigned char)91;
unsigned short var_4 = (unsigned short)1734;
unsigned char var_5 = (unsigned char)187;
long long int var_6 = 6920640439516985824LL;
signed char var_7 = (signed char)113;
unsigned long long int var_8 = 1681139659760168082ULL;
int zero = 0;
signed char var_11 = (signed char)-19;
unsigned long long int var_12 = 6144770765752425206ULL;
unsigned char var_13 = (unsigned char)114;
unsigned short var_14 = (unsigned short)35106;
int arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 981725935 : -1893220770;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
