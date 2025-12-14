#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)226;
unsigned short var_11 = (unsigned short)46610;
unsigned int var_12 = 2983990643U;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1431505349;
unsigned int var_19 = 4080573223U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
