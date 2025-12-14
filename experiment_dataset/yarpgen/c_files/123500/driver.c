#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7408069259687820197LL;
unsigned char var_8 = (unsigned char)178;
unsigned char var_9 = (unsigned char)17;
signed char var_11 = (signed char)90;
unsigned long long int var_18 = 6373216657661121391ULL;
int zero = 0;
unsigned int var_20 = 2026631619U;
unsigned int var_21 = 3846681539U;
void init() {
}

void checksum() {
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
