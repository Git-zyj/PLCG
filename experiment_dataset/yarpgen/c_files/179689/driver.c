#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)60485;
unsigned short var_10 = (unsigned short)56895;
unsigned short var_14 = (unsigned short)46508;
int zero = 0;
unsigned int var_15 = 417789027U;
unsigned char var_16 = (unsigned char)229;
unsigned long long int var_17 = 2702624924974649618ULL;
unsigned long long int var_18 = 11434050312141704341ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
