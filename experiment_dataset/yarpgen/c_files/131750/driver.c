#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2183;
signed char var_7 = (signed char)-1;
short var_11 = (short)-6933;
int zero = 0;
unsigned short var_15 = (unsigned short)62183;
unsigned long long int var_16 = 5854361101468976536ULL;
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
