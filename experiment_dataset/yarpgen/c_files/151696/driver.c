#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3546845555113243526LL;
long long int var_1 = -618413117556285843LL;
unsigned long long int var_2 = 2976111856834520084ULL;
unsigned char var_3 = (unsigned char)186;
long long int var_5 = -512290741904772597LL;
long long int var_7 = -7313591785786334688LL;
long long int var_8 = 8144951781585734680LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 3387892711868903813LL;
short var_11 = (short)22006;
int zero = 0;
long long int var_12 = -8969770624907782958LL;
unsigned int var_13 = 1503730944U;
short var_14 = (short)4781;
long long int var_15 = -5346874040240625668LL;
long long int var_16 = -4757568430496770085LL;
unsigned long long int arr_0 [25] ;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6693484808705492313ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)97;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
