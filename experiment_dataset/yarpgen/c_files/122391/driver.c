#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
short var_3 = (short)20507;
unsigned int var_5 = 1737199998U;
short var_7 = (short)20863;
unsigned int var_8 = 1173397082U;
short var_9 = (short)11478;
int zero = 0;
unsigned long long int var_12 = 11719038215920367118ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
