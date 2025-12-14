#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2388493216U;
unsigned long long int var_4 = 15776309726223229892ULL;
signed char var_6 = (signed char)7;
unsigned char var_9 = (unsigned char)208;
unsigned short var_10 = (unsigned short)29671;
int zero = 0;
signed char var_14 = (signed char)-44;
short var_15 = (short)11662;
short var_16 = (short)-7874;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
