#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 626521369;
int var_7 = 1896858055;
signed char var_8 = (signed char)15;
int var_10 = -1224393428;
signed char var_16 = (signed char)70;
int zero = 0;
int var_19 = -285744358;
int var_20 = -643930;
signed char var_21 = (signed char)-82;
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
