#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
short var_2 = (short)25424;
unsigned long long int var_9 = 16104587139160499981ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)7155;
unsigned long long int var_14 = 11732494982273284464ULL;
short var_15 = (short)30602;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
