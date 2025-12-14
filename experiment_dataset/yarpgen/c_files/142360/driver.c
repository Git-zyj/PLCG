#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26194;
unsigned short var_3 = (unsigned short)36027;
long long int var_4 = 204793368613977153LL;
unsigned char var_5 = (unsigned char)26;
long long int var_8 = 9073033835008457692LL;
signed char var_17 = (signed char)-60;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
long long int var_19 = -1594240556614202530LL;
unsigned short var_20 = (unsigned short)27399;
unsigned short var_21 = (unsigned short)19384;
unsigned char arr_2 [22] [22] [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)155 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3055370539162297666LL : -5355897010109671553LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
