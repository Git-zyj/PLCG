#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -876264969;
_Bool var_3 = (_Bool)0;
int var_4 = -619010367;
int var_7 = 320730605;
unsigned char var_9 = (unsigned char)231;
int zero = 0;
unsigned int var_10 = 2077169149U;
unsigned int var_11 = 4177515742U;
short var_12 = (short)-29876;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
