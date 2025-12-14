#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
int var_3 = -769033818;
signed char var_5 = (signed char)-70;
signed char var_7 = (signed char)74;
short var_9 = (short)31932;
unsigned long long int var_10 = 4395219858066736539ULL;
int zero = 0;
unsigned long long int var_13 = 2325250855686043276ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)71;
short var_16 = (short)-8669;
void init() {
}

void checksum() {
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
