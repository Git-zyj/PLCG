#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
int var_4 = -1396020936;
signed char var_15 = (signed char)67;
unsigned char var_17 = (unsigned char)216;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)9;
signed char var_22 = (signed char)64;
long long int var_23 = 4965002810748989168LL;
unsigned int var_24 = 2479217003U;
unsigned char var_25 = (unsigned char)40;
long long int var_26 = -5597516071417274746LL;
unsigned int arr_0 [17] [17] ;
long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3284860202U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 776896890342311561LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
