#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 379845765738054504LL;
unsigned char var_9 = (unsigned char)61;
int zero = 0;
short var_11 = (short)-3779;
unsigned long long int var_12 = 4043714397858466511ULL;
unsigned char var_13 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
