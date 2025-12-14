#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17731;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
unsigned short var_13 = (unsigned short)52709;
unsigned short var_14 = (unsigned short)64571;
short var_15 = (short)3007;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
