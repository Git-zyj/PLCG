#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3639624694011104785LL;
long long int var_2 = -1045727228870938488LL;
unsigned long long int var_5 = 10578578693647479272ULL;
unsigned char var_6 = (unsigned char)119;
int var_7 = -891015815;
long long int var_12 = -5955251560765489073LL;
int zero = 0;
unsigned char var_13 = (unsigned char)234;
signed char var_14 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
