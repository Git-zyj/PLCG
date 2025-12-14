#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14789695444428833822ULL;
signed char var_5 = (signed char)61;
unsigned char var_8 = (unsigned char)61;
int zero = 0;
signed char var_11 = (signed char)-43;
signed char var_12 = (signed char)46;
long long int var_13 = -660045841080935912LL;
unsigned int var_14 = 984427624U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
