#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
unsigned short var_2 = (unsigned short)31032;
signed char var_4 = (signed char)-63;
int var_7 = 1590407394;
signed char var_11 = (signed char)100;
unsigned short var_14 = (unsigned short)21377;
int zero = 0;
int var_16 = 2034901492;
short var_17 = (short)-10736;
signed char var_18 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
