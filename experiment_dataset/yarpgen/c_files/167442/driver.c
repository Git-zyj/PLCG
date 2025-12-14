#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 378187049;
unsigned int var_3 = 564424845U;
unsigned int var_7 = 248883423U;
int zero = 0;
int var_19 = 2086270952;
unsigned char var_20 = (unsigned char)145;
short var_21 = (short)-5985;
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
