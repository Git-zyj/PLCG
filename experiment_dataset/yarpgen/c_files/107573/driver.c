#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)20;
_Bool var_7 = (_Bool)1;
int var_8 = -211723367;
signed char var_9 = (signed char)79;
signed char var_10 = (signed char)80;
int zero = 0;
unsigned int var_12 = 1634973711U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)2;
signed char var_15 = (signed char)44;
signed char var_16 = (signed char)74;
void init() {
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
