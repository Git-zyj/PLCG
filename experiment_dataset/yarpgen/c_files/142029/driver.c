#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1518712386;
unsigned short var_8 = (unsigned short)54724;
unsigned short var_15 = (unsigned short)44627;
int zero = 0;
int var_16 = 1070009383;
unsigned short var_17 = (unsigned short)324;
int var_18 = -943529917;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
