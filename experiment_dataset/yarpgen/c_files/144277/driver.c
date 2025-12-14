#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)512;
signed char var_9 = (signed char)120;
unsigned int var_11 = 4117004018U;
short var_19 = (short)8181;
int zero = 0;
unsigned char var_20 = (unsigned char)115;
unsigned char var_21 = (unsigned char)197;
unsigned short var_22 = (unsigned short)61408;
int var_23 = -831402941;
short var_24 = (short)-10995;
short var_25 = (short)1372;
long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6562528987406122857LL : -3472552883934252686LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)38944;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)-78;
}

void checksum() {
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
