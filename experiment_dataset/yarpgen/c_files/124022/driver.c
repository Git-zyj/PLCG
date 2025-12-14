#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1159364881U;
unsigned long long int var_2 = 17482085766007744445ULL;
unsigned long long int var_6 = 170169243986097568ULL;
short var_13 = (short)-7489;
int zero = 0;
unsigned char var_15 = (unsigned char)217;
long long int var_16 = 3546610208554262999LL;
short var_17 = (short)-19362;
int var_18 = 1929109078;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
