#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
unsigned int var_3 = 1470641700U;
signed char var_4 = (signed char)27;
unsigned long long int var_5 = 8780466348549866978ULL;
signed char var_6 = (signed char)80;
int zero = 0;
unsigned long long int var_10 = 10319674136830579125ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 477249829488977678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
