#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)212;
signed char var_4 = (signed char)106;
unsigned long long int var_8 = 10654105321451614294ULL;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
unsigned short var_11 = (unsigned short)40657;
unsigned int var_12 = 2334079455U;
_Bool var_13 = (_Bool)0;
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
