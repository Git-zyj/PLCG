#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15880928539338148378ULL;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
signed char var_13 = (signed char)24;
long long int var_14 = 4398474811027121566LL;
unsigned short var_15 = (unsigned short)50130;
unsigned int var_16 = 3516397538U;
signed char var_17 = (signed char)-65;
int var_18 = -2111731992;
long long int var_19 = -4642472530217587278LL;
long long int arr_6 [17] ;
signed char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8953251821278704830LL : -7167058661882484915LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-13;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
