#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57325;
unsigned short var_2 = (unsigned short)41667;
unsigned int var_3 = 4222317795U;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)185;
unsigned long long int var_9 = 5244367868279747972ULL;
int zero = 0;
short var_13 = (short)18409;
short var_14 = (short)28823;
signed char var_15 = (signed char)74;
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
