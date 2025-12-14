#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
unsigned int var_6 = 157278178U;
long long int var_7 = -7934024493985439912LL;
unsigned char var_9 = (unsigned char)240;
unsigned int var_10 = 1791514680U;
int zero = 0;
unsigned int var_12 = 3339707681U;
unsigned int var_13 = 822740312U;
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
