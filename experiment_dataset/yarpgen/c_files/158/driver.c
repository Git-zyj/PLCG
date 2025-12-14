#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 237068730634813380ULL;
unsigned long long int var_10 = 9022937523357714432ULL;
unsigned short var_12 = (unsigned short)40537;
unsigned long long int var_13 = 15751369345622676709ULL;
unsigned short var_16 = (unsigned short)18717;
int zero = 0;
unsigned short var_19 = (unsigned short)36078;
unsigned short var_20 = (unsigned short)65395;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
