#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2534568373865219202LL;
unsigned char var_2 = (unsigned char)201;
short var_4 = (short)-11342;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_7 = 7296069434378541792ULL;
unsigned long long int var_8 = 5640902755367400780ULL;
unsigned long long int var_9 = 18158386192409629900ULL;
long long int var_14 = -3672390305327271070LL;
unsigned int var_15 = 240931365U;
int zero = 0;
long long int var_16 = 4331044325639207978LL;
unsigned int var_17 = 752942461U;
unsigned long long int var_18 = 4778298401332758456ULL;
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
