#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1138695063U;
long long int var_2 = -2908708028536825282LL;
unsigned long long int var_3 = 17292800602080634565ULL;
long long int var_5 = 2041456715800885866LL;
unsigned int var_7 = 2535572996U;
unsigned short var_8 = (unsigned short)35667;
unsigned short var_9 = (unsigned short)43128;
int zero = 0;
signed char var_10 = (signed char)59;
signed char var_11 = (signed char)83;
unsigned char var_12 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
