#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)18;
int var_4 = 504737556;
long long int var_8 = 7950974340629858774LL;
unsigned char var_11 = (unsigned char)79;
signed char var_16 = (signed char)-121;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 1641121012;
signed char var_21 = (signed char)116;
void init() {
}

void checksum() {
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
