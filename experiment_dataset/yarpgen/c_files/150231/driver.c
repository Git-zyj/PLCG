#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1048772632;
unsigned int var_2 = 3793984442U;
int var_4 = 1858329323;
long long int var_7 = 4035079272634085035LL;
int zero = 0;
long long int var_10 = -5843574087657405004LL;
short var_11 = (short)-24234;
unsigned char var_12 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
