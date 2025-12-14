#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25705;
unsigned char var_1 = (unsigned char)162;
unsigned short var_5 = (unsigned short)30995;
unsigned long long int var_6 = 3046634201365911164ULL;
long long int var_8 = -6190062628156812756LL;
int zero = 0;
signed char var_12 = (signed char)26;
unsigned short var_13 = (unsigned short)18142;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
