#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4099582043U;
unsigned short var_2 = (unsigned short)31107;
signed char var_9 = (signed char)107;
unsigned long long int var_10 = 18003587782710164372ULL;
int zero = 0;
signed char var_12 = (signed char)-62;
unsigned short var_13 = (unsigned short)540;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
