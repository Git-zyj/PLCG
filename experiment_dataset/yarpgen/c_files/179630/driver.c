#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 7146437787318335487ULL;
signed char var_13 = (signed char)-91;
unsigned long long int var_17 = 5886053209296988466ULL;
int zero = 0;
short var_20 = (short)29594;
unsigned short var_21 = (unsigned short)65098;
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
