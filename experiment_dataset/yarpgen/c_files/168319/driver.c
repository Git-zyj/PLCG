#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 22036953712933264LL;
short var_4 = (short)22654;
unsigned short var_6 = (unsigned short)54798;
long long int var_9 = 4587091818818410043LL;
signed char var_10 = (signed char)117;
short var_12 = (short)13592;
int zero = 0;
unsigned long long int var_13 = 8075196764756455176ULL;
long long int var_14 = 147449272466255829LL;
signed char var_15 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
