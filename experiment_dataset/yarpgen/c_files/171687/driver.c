#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17576447188205033139ULL;
long long int var_6 = 6107177909053819544LL;
_Bool var_7 = (_Bool)0;
int var_8 = -151726137;
long long int var_9 = 503027174601430457LL;
int zero = 0;
unsigned short var_16 = (unsigned short)21349;
unsigned int var_17 = 4170034185U;
_Bool var_18 = (_Bool)0;
int var_19 = -163555999;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)4899;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
