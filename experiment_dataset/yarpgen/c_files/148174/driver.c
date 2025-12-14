#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
int var_1 = -1884182311;
unsigned char var_3 = (unsigned char)124;
_Bool var_9 = (_Bool)1;
int var_12 = -704985331;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)26;
unsigned short var_15 = (unsigned short)61216;
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
