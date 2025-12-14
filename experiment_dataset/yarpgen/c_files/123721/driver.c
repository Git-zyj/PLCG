#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)161;
unsigned long long int var_10 = 1321495007948130764ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)85;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)215;
unsigned long long int var_22 = 18242258289407471866ULL;
unsigned char var_23 = (unsigned char)93;
long long int arr_2 [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1458658696788643468LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
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
