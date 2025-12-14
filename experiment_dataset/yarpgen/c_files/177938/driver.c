#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_9 = (unsigned char)61;
unsigned char var_12 = (unsigned char)194;
unsigned int var_13 = 1269722200U;
int zero = 0;
long long int var_19 = 8586070945618459377LL;
short var_20 = (short)17225;
void init() {
}

void checksum() {
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
