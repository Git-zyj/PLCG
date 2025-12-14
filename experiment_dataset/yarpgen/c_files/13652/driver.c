#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58204;
short var_4 = (short)21962;
unsigned char var_7 = (unsigned char)38;
short var_9 = (short)-29271;
int zero = 0;
signed char var_12 = (signed char)-39;
unsigned long long int var_13 = 12249994571555325889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
