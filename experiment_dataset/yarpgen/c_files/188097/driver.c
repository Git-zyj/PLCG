#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 188226279U;
unsigned char var_7 = (unsigned char)178;
unsigned char var_10 = (unsigned char)90;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 284815894;
unsigned long long int var_13 = 2041085990765249896ULL;
unsigned int var_14 = 3941275202U;
unsigned int var_15 = 877670066U;
int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 287496977;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
