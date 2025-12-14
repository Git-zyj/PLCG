#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-75;
short var_11 = (short)32561;
unsigned long long int var_12 = 9564774513161180962ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
unsigned short var_14 = (unsigned short)47893;
unsigned int var_15 = 2996346835U;
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
