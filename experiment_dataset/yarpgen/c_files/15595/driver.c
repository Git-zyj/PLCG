#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50530;
short var_4 = (short)-4271;
unsigned char var_9 = (unsigned char)80;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)49733;
int var_12 = 1557406210;
int zero = 0;
int var_13 = 214808039;
_Bool var_14 = (_Bool)1;
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
