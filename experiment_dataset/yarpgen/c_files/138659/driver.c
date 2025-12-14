#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-56;
short var_14 = (short)11703;
int zero = 0;
unsigned long long int var_16 = 18001356687137411947ULL;
unsigned char var_17 = (unsigned char)62;
unsigned long long int var_18 = 9237079176567270018ULL;
unsigned char var_19 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
