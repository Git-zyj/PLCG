#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2477691282U;
unsigned int var_4 = 696031726U;
signed char var_5 = (signed char)-109;
signed char var_12 = (signed char)-115;
int zero = 0;
signed char var_13 = (signed char)-34;
short var_14 = (short)32062;
signed char var_15 = (signed char)118;
unsigned short var_16 = (unsigned short)7454;
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
