#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1679724652496872609LL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-69;
int zero = 0;
short var_12 = (short)24438;
unsigned char var_13 = (unsigned char)123;
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
