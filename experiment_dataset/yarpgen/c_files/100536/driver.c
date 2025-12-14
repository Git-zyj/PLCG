#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
unsigned short var_2 = (unsigned short)19818;
unsigned short var_3 = (unsigned short)49257;
unsigned short var_4 = (unsigned short)29605;
unsigned short var_8 = (unsigned short)4383;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1960300904U;
unsigned short var_11 = (unsigned short)29203;
unsigned long long int var_12 = 12014737343478418501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
