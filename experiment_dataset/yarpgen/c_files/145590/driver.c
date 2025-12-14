#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)8146;
unsigned char var_6 = (unsigned char)163;
unsigned char var_8 = (unsigned char)26;
unsigned long long int var_9 = 3405046606584655512ULL;
int zero = 0;
unsigned int var_10 = 856172006U;
unsigned int var_11 = 3681615525U;
int var_12 = -1128672432;
signed char var_13 = (signed char)-125;
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
