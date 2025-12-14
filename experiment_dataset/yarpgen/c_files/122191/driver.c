#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32006;
unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)73;
unsigned int var_8 = 1667448698U;
int var_9 = 1936351372;
int zero = 0;
int var_11 = 512920034;
short var_12 = (short)-3781;
unsigned char var_13 = (unsigned char)39;
_Bool var_14 = (_Bool)1;
void init() {
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
