#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6414158594772522891LL;
short var_8 = (short)-16939;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
long long int var_11 = 3933331883854643396LL;
signed char var_12 = (signed char)-110;
long long int var_13 = -881040109210862037LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
