#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19393;
int var_2 = 160694544;
signed char var_5 = (signed char)-62;
unsigned long long int var_6 = 16243409926790209004ULL;
signed char var_8 = (signed char)18;
int zero = 0;
short var_12 = (short)16257;
unsigned long long int var_13 = 9436461127701942689ULL;
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
