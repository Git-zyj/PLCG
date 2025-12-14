#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13017;
unsigned int var_6 = 544106026U;
short var_7 = (short)-28686;
unsigned char var_11 = (unsigned char)106;
int zero = 0;
int var_12 = 80007877;
signed char var_13 = (signed char)57;
signed char var_14 = (signed char)-10;
short var_15 = (short)4478;
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
