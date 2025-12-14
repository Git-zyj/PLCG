#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7897;
unsigned char var_4 = (unsigned char)121;
unsigned short var_5 = (unsigned short)24218;
signed char var_7 = (signed char)-69;
int zero = 0;
signed char var_15 = (signed char)-29;
int var_16 = -2064066188;
signed char var_17 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
