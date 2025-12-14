#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20572;
long long int var_4 = -4294964438493854409LL;
unsigned long long int var_6 = 14701227264611210385ULL;
int zero = 0;
unsigned long long int var_11 = 7498170888509227112ULL;
signed char var_12 = (signed char)68;
void init() {
}

void checksum() {
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
