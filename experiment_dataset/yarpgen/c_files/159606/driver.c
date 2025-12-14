#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
unsigned int var_6 = 125789671U;
long long int var_12 = 262017903197242018LL;
int zero = 0;
long long int var_14 = -7158020960647259981LL;
long long int var_15 = 3437678106344048298LL;
long long int var_16 = 8242103129249415836LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
