#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5375916539261067108ULL;
signed char var_2 = (signed char)-46;
short var_3 = (short)9036;
signed char var_4 = (signed char)-57;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14782503925440440694ULL;
signed char var_7 = (signed char)40;
unsigned int var_8 = 1892269353U;
short var_9 = (short)28030;
int zero = 0;
unsigned long long int var_10 = 17501822007178432358ULL;
_Bool var_11 = (_Bool)0;
int var_12 = 221584122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
