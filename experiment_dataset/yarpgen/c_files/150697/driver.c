#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)125;
long long int var_8 = 2647917431404553185LL;
int zero = 0;
signed char var_11 = (signed char)-87;
unsigned char var_12 = (unsigned char)116;
signed char var_13 = (signed char)-34;
long long int var_14 = 3746594640965889629LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
