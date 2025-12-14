#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8862;
long long int var_2 = 8860009424771807767LL;
unsigned short var_4 = (unsigned short)46895;
short var_8 = (short)27702;
int zero = 0;
int var_10 = 892251042;
unsigned char var_11 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
