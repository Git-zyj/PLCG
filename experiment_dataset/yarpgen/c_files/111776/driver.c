#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1258454752;
unsigned short var_3 = (unsigned short)33084;
unsigned int var_6 = 931504036U;
unsigned int var_7 = 1696742289U;
signed char var_10 = (signed char)85;
unsigned short var_11 = (unsigned short)20071;
unsigned long long int var_13 = 4607893313510333303ULL;
unsigned char var_14 = (unsigned char)245;
int zero = 0;
unsigned long long int var_16 = 8810949891495065057ULL;
unsigned int var_17 = 1453003950U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
