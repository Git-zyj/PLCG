#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_5 = 442494892U;
short var_6 = (short)22208;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-71;
unsigned int var_13 = 3559932221U;
unsigned long long int var_14 = 3974578679375559542ULL;
int zero = 0;
unsigned int var_15 = 2431347503U;
signed char var_16 = (signed char)11;
unsigned int var_17 = 3413228054U;
unsigned long long int var_18 = 7016955542869293137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
