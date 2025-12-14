#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned long long int var_4 = 15697065110449317331ULL;
signed char var_9 = (signed char)6;
int var_10 = 220954638;
unsigned short var_16 = (unsigned short)4311;
int zero = 0;
unsigned short var_19 = (unsigned short)40232;
unsigned short var_20 = (unsigned short)12768;
unsigned short var_21 = (unsigned short)22059;
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
