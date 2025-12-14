#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)59;
unsigned char var_3 = (unsigned char)46;
short var_5 = (short)-31013;
short var_7 = (short)76;
unsigned char var_8 = (unsigned char)22;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned char var_11 = (unsigned char)26;
short var_12 = (short)-3331;
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
