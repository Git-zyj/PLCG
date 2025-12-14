#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
unsigned short var_2 = (unsigned short)45005;
int var_4 = 47862099;
signed char var_6 = (signed char)-46;
short var_7 = (short)-29957;
long long int var_9 = -7559075152203462352LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1718079669;
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
