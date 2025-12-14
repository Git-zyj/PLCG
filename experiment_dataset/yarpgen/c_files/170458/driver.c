#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)839;
signed char var_4 = (signed char)-19;
unsigned long long int var_5 = 13657568153303393084ULL;
unsigned short var_9 = (unsigned short)43141;
unsigned int var_13 = 466876129U;
short var_15 = (short)25644;
int zero = 0;
unsigned short var_18 = (unsigned short)32524;
signed char var_19 = (signed char)-83;
void init() {
}

void checksum() {
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
