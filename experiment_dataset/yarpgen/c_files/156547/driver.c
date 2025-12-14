#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)61867;
unsigned char var_9 = (unsigned char)168;
unsigned char var_10 = (unsigned char)45;
unsigned long long int var_12 = 15278319298276665833ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = -853245246;
_Bool var_21 = (_Bool)1;
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
