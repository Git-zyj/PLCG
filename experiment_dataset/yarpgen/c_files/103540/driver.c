#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
long long int var_4 = 1689583324376393847LL;
unsigned long long int var_17 = 15715263178934990719ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)132;
long long int var_21 = 7371415188029454412LL;
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
