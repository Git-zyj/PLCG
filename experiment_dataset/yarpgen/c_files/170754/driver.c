#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17221736248936760164ULL;
signed char var_3 = (signed char)-97;
unsigned char var_8 = (unsigned char)181;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1180031116;
unsigned int var_13 = 1218685033U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
