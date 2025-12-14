#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2820236477U;
unsigned int var_1 = 4180005246U;
signed char var_2 = (signed char)-47;
unsigned char var_3 = (unsigned char)251;
int var_4 = -1853673977;
unsigned short var_5 = (unsigned short)26647;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)90;
long long int var_11 = -842218206455945896LL;
long long int var_12 = 583673859150692811LL;
unsigned int var_13 = 2671327519U;
_Bool var_14 = (_Bool)0;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)25;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
