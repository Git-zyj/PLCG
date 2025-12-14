#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22846;
signed char var_2 = (signed char)53;
signed char var_3 = (signed char)8;
signed char var_8 = (signed char)32;
long long int var_9 = 2665121634811876055LL;
long long int var_10 = -2730093819280683773LL;
long long int var_12 = -3954180345121671389LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5947679282449998915LL;
int zero = 0;
signed char var_16 = (signed char)-118;
long long int var_17 = -4520264298320786147LL;
long long int var_18 = 248245209821691833LL;
unsigned int var_19 = 2623706952U;
void init() {
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
