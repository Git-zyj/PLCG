#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25311;
long long int var_1 = -8159232237526141782LL;
unsigned short var_2 = (unsigned short)3266;
unsigned short var_4 = (unsigned short)44923;
unsigned long long int var_7 = 7933727887372672599ULL;
long long int var_9 = -2168850630505344072LL;
signed char var_12 = (signed char)-107;
int zero = 0;
unsigned short var_13 = (unsigned short)18277;
signed char var_14 = (signed char)-16;
long long int var_15 = -7483973410809933075LL;
signed char var_16 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
