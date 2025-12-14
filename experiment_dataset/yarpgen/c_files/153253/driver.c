#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8381;
unsigned short var_2 = (unsigned short)45061;
unsigned short var_6 = (unsigned short)58701;
long long int var_10 = -1762002473446377008LL;
unsigned int var_11 = 1867245174U;
unsigned char var_12 = (unsigned char)200;
long long int var_13 = -1637700078292480869LL;
short var_14 = (short)-2601;
int zero = 0;
signed char var_17 = (signed char)-118;
unsigned int var_18 = 1153707869U;
short var_19 = (short)21445;
unsigned int var_20 = 2417097075U;
long long int var_21 = 7699003216705394992LL;
unsigned char arr_5 [21] [21] [21] ;
long long int arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 470738380683412906LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
