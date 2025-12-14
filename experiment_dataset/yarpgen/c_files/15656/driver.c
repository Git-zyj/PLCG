#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
short var_3 = (short)-11155;
unsigned int var_7 = 3622286369U;
short var_9 = (short)-32522;
long long int var_13 = 3763814753226787121LL;
int zero = 0;
unsigned long long int var_16 = 7811637271764968428ULL;
signed char var_17 = (signed char)-109;
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
