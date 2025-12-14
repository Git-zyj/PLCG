#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1044402498U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)249;
unsigned int var_9 = 1243772365U;
unsigned int var_11 = 4070958354U;
int zero = 0;
unsigned int var_13 = 3882624064U;
unsigned short var_14 = (unsigned short)25259;
void init() {
}

void checksum() {
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
