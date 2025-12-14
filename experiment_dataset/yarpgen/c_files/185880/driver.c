#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7028715612402740911ULL;
unsigned long long int var_9 = 13190778677072674158ULL;
unsigned long long int var_15 = 5856646465348951473ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1006864110;
unsigned char var_19 = (unsigned char)187;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)132;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
