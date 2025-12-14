#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26488;
int var_4 = -179959699;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 353208596U;
unsigned char var_20 = (unsigned char)154;
unsigned short var_21 = (unsigned short)45293;
unsigned long long int var_22 = 17412568471695328554ULL;
unsigned short var_23 = (unsigned short)31702;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
