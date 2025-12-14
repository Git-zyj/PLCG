#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 843646800;
long long int var_2 = 6242467224789599006LL;
short var_3 = (short)16453;
unsigned int var_4 = 1455393288U;
int var_6 = 881909064;
int var_12 = -843405352;
unsigned int var_14 = 3741709017U;
unsigned long long int var_16 = 9940922774667118694ULL;
unsigned long long int var_17 = 9872255172996158385ULL;
int zero = 0;
unsigned int var_19 = 1397554426U;
int var_20 = 961151871;
int var_21 = -1056100831;
unsigned int var_22 = 523412297U;
signed char arr_0 [24] ;
signed char arr_2 [24] ;
unsigned int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3626198677U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
