#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4345513364880006701ULL;
unsigned int var_5 = 3391208041U;
short var_6 = (short)-10474;
int var_7 = 264689388;
unsigned char var_8 = (unsigned char)125;
short var_12 = (short)-19087;
short var_13 = (short)31916;
unsigned long long int var_14 = 3311458631616985683ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)66;
int var_16 = 684293045;
void init() {
}

void checksum() {
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
