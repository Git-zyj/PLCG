#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
signed char var_1 = (signed char)104;
signed char var_2 = (signed char)7;
_Bool var_3 = (_Bool)1;
short var_8 = (short)-25280;
unsigned long long int var_9 = 4605292695756079645ULL;
unsigned int var_10 = 2135713243U;
_Bool var_11 = (_Bool)1;
int var_12 = -1095952218;
int zero = 0;
unsigned long long int var_18 = 9192791908663138935ULL;
signed char var_19 = (signed char)106;
unsigned short var_20 = (unsigned short)53093;
short var_21 = (short)24839;
unsigned int var_22 = 3432388652U;
signed char var_23 = (signed char)-116;
unsigned short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
signed char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)14553;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 14816851655700190281ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-7;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
