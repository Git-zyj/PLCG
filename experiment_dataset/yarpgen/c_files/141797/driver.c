#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13840084864262179308ULL;
unsigned short var_9 = (unsigned short)25706;
long long int var_18 = -2375994104981393931LL;
int zero = 0;
unsigned int var_20 = 347211526U;
unsigned short var_21 = (unsigned short)58779;
signed char var_22 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
