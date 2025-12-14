#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7914841464384597428LL;
int var_8 = -1336275987;
unsigned char var_9 = (unsigned char)107;
int var_11 = -1550649968;
int zero = 0;
int var_13 = -649474013;
long long int var_14 = 8994717355406181329LL;
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
