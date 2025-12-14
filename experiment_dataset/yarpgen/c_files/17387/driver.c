#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1097198388U;
unsigned long long int var_5 = 16690409687378050860ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 574981661982213686LL;
int zero = 0;
unsigned short var_13 = (unsigned short)33626;
unsigned char var_14 = (unsigned char)154;
void init() {
}

void checksum() {
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
