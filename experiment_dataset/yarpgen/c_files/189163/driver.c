#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned long long int var_11 = 18106572626621022121ULL;
unsigned long long int var_13 = 2952958240782376769ULL;
int zero = 0;
unsigned long long int var_18 = 2346769586705967004ULL;
long long int var_19 = 1612991154101308689LL;
unsigned short var_20 = (unsigned short)16159;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
