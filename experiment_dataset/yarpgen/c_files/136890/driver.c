#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)28012;
unsigned char var_7 = (unsigned char)204;
unsigned int var_9 = 3465101806U;
int zero = 0;
signed char var_13 = (signed char)127;
int var_14 = -1085826305;
unsigned char var_15 = (unsigned char)244;
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
