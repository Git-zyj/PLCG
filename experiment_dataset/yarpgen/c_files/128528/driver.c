#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3586192198247239540ULL;
unsigned int var_3 = 3414511299U;
int var_6 = 609326133;
int var_7 = 1971775729;
unsigned long long int var_9 = 1769133157768808401ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)32727;
unsigned long long int var_13 = 7679200798106688239ULL;
signed char var_14 = (signed char)28;
void init() {
}

void checksum() {
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
