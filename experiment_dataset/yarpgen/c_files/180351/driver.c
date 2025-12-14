#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-65;
unsigned char var_11 = (unsigned char)217;
long long int var_13 = 5844689999028842236LL;
int zero = 0;
unsigned short var_19 = (unsigned short)25627;
unsigned int var_20 = 1872732456U;
short var_21 = (short)15953;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
