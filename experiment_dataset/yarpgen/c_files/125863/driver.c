#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)116;
unsigned short var_11 = (unsigned short)35246;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = 722375803;
long long int var_21 = 7378263734710217181LL;
unsigned short var_22 = (unsigned short)44278;
int var_23 = -1941014215;
unsigned short var_24 = (unsigned short)52709;
unsigned short var_25 = (unsigned short)36687;
long long int arr_8 [20] [20] ;
unsigned short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 296930226207296946LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)41936;
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
