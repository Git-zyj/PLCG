#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30994;
int var_4 = -1570635461;
long long int var_8 = 925499016436282043LL;
int zero = 0;
short var_10 = (short)-1342;
signed char var_11 = (signed char)-69;
unsigned long long int var_12 = 6746726760165991108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
