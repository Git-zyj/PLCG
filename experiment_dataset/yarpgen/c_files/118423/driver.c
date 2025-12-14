#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 744967752U;
long long int var_6 = -6325869348303554012LL;
long long int var_8 = 8609537533395219503LL;
signed char var_9 = (signed char)62;
int zero = 0;
unsigned char var_20 = (unsigned char)137;
short var_21 = (short)19508;
unsigned int var_22 = 116995165U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
