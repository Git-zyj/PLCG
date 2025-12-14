#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5990603489839617476LL;
short var_6 = (short)11439;
unsigned short var_8 = (unsigned short)15410;
int zero = 0;
short var_12 = (short)-17279;
unsigned long long int var_13 = 1461416425791226600ULL;
unsigned long long int var_14 = 9993773104079969840ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
