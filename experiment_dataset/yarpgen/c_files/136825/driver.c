#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 584036559U;
unsigned long long int var_3 = 11664845654684108867ULL;
int var_4 = -1967293075;
unsigned short var_5 = (unsigned short)22283;
unsigned short var_7 = (unsigned short)799;
unsigned int var_8 = 1144909908U;
short var_13 = (short)-10670;
signed char var_15 = (signed char)59;
unsigned short var_17 = (unsigned short)46995;
int zero = 0;
signed char var_19 = (signed char)-10;
int var_20 = 132978557;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
