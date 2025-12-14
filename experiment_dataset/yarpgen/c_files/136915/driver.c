#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 135718771U;
unsigned char var_5 = (unsigned char)90;
unsigned char var_6 = (unsigned char)147;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)242;
int zero = 0;
unsigned long long int var_12 = 4982613247325041516ULL;
int var_13 = 543165324;
void init() {
}

void checksum() {
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
