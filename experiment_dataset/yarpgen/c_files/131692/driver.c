#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12453;
unsigned long long int var_3 = 8695399571430523279ULL;
signed char var_4 = (signed char)-127;
int var_7 = -932024295;
int zero = 0;
long long int var_10 = 7354006680691513188LL;
signed char var_11 = (signed char)23;
long long int var_12 = -3479650086737859836LL;
unsigned char arr_4 [20] [20] ;
long long int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6758806171152713473LL : -8622889227503842036LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
