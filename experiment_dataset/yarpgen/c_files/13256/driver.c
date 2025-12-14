#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22706;
_Bool var_1 = (_Bool)0;
int var_6 = -1585595484;
unsigned short var_17 = (unsigned short)18202;
int zero = 0;
unsigned short var_20 = (unsigned short)49569;
signed char var_21 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
