#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18190664803714034035ULL;
unsigned long long int var_5 = 18215726091462621594ULL;
short var_6 = (short)32297;
unsigned long long int var_9 = 2508480629647209789ULL;
int zero = 0;
signed char var_16 = (signed char)-67;
short var_17 = (short)-17757;
void init() {
}

void checksum() {
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
