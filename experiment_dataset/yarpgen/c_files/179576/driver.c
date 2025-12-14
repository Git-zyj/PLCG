#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)47;
int var_10 = -559660045;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
signed char var_20 = (signed char)-118;
unsigned short var_21 = (unsigned short)40494;
unsigned int var_22 = 3583538357U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
