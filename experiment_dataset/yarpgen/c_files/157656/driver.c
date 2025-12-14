#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13666;
unsigned long long int var_4 = 18222588680222698437ULL;
unsigned short var_7 = (unsigned short)48382;
long long int var_8 = 7932773900314576949LL;
long long int var_9 = -6143695092903122166LL;
unsigned int var_10 = 3219700523U;
unsigned int var_11 = 788725853U;
unsigned long long int var_13 = 4658457408647374319ULL;
unsigned int var_15 = 4231328265U;
long long int var_17 = 4152517371893497301LL;
short var_18 = (short)-32459;
int zero = 0;
unsigned long long int var_20 = 16604362079228565844ULL;
signed char var_21 = (signed char)-42;
unsigned int var_22 = 2007662331U;
unsigned int var_23 = 4251250843U;
unsigned char arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)107;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
