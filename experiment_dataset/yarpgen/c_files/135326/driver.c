#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -787550576;
int var_7 = 387545691;
int var_12 = 1886788296;
int zero = 0;
int var_19 = -250155677;
unsigned char var_20 = (unsigned char)34;
unsigned char var_21 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
