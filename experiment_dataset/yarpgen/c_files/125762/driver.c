#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12430209829900602259ULL;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)34;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)31471;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
