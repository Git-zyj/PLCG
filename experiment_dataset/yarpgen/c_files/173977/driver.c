#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15583346273433975286ULL;
short var_3 = (short)-9988;
short var_4 = (short)19491;
unsigned short var_5 = (unsigned short)65201;
long long int var_8 = 2111744751812785989LL;
long long int var_9 = -152457604656871904LL;
signed char var_10 = (signed char)40;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7810477735489234835LL;
short var_13 = (short)8898;
long long int var_14 = 2505075362674437068LL;
_Bool arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
