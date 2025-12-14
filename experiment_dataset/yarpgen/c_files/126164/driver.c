#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
signed char var_3 = (signed char)-10;
unsigned int var_6 = 3617658809U;
unsigned long long int var_10 = 4419629468486248109ULL;
int zero = 0;
int var_13 = -1187335028;
int var_14 = 446635507;
short var_15 = (short)22172;
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
