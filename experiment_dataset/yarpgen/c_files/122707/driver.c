#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16976;
unsigned char var_4 = (unsigned char)192;
unsigned char var_8 = (unsigned char)183;
signed char var_10 = (signed char)-19;
signed char var_11 = (signed char)-14;
long long int var_12 = -1748693615529998322LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6937394735817215120LL;
unsigned char var_15 = (unsigned char)187;
long long int var_16 = 2767682570459302758LL;
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
