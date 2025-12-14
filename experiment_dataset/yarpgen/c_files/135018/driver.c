#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-197;
signed char var_5 = (signed char)124;
unsigned short var_7 = (unsigned short)16692;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17433082000148936566ULL;
unsigned int var_13 = 3548677217U;
unsigned int var_14 = 1299739943U;
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
