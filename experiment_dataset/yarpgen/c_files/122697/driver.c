#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1659104792;
unsigned char var_4 = (unsigned char)186;
unsigned char var_5 = (unsigned char)83;
signed char var_6 = (signed char)-84;
int var_8 = 683281591;
int zero = 0;
int var_13 = 7192835;
_Bool var_14 = (_Bool)1;
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
