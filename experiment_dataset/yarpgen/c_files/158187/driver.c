#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
short var_3 = (short)-5747;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-69;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)29888;
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
