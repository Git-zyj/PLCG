#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49877;
short var_4 = (short)21402;
unsigned int var_7 = 1936321124U;
int zero = 0;
long long int var_19 = 7907403865986651174LL;
long long int var_20 = -1523730715834908957LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14972666630777165128ULL;
signed char var_23 = (signed char)-31;
unsigned int arr_0 [16] [16] ;
long long int arr_2 [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1034163214U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -3104462653046078139LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)27658;
}

void checksum() {
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
