#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2093741086;
unsigned short var_4 = (unsigned short)64583;
int var_6 = -969762822;
unsigned short var_8 = (unsigned short)32890;
int var_9 = -1007030754;
int zero = 0;
unsigned int var_13 = 2946563386U;
unsigned int var_14 = 3914022780U;
unsigned short var_15 = (unsigned short)14673;
unsigned char var_16 = (unsigned char)123;
unsigned int var_17 = 3110215898U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
