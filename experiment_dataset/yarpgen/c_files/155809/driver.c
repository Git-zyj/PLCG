#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5269401647457056851ULL;
unsigned char var_6 = (unsigned char)59;
int var_15 = 1246063471;
int zero = 0;
unsigned long long int var_17 = 5358546620123838778ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-14398;
signed char var_20 = (signed char)-2;
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
