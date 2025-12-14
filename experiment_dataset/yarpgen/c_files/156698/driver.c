#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6650314771394445696ULL;
unsigned char var_6 = (unsigned char)19;
short var_9 = (short)-11762;
unsigned short var_15 = (unsigned short)12632;
int zero = 0;
signed char var_16 = (signed char)-76;
long long int var_17 = 9023334905343027649LL;
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
