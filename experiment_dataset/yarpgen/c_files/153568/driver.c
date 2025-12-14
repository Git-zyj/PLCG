#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18713;
signed char var_6 = (signed char)-38;
signed char var_9 = (signed char)19;
signed char var_11 = (signed char)44;
int zero = 0;
short var_12 = (short)13031;
unsigned char var_13 = (unsigned char)154;
signed char var_14 = (signed char)-11;
short var_15 = (short)-17857;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
