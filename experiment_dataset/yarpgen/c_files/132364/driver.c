#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)40678;
unsigned long long int var_16 = 14141624335158442718ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
unsigned long long int var_21 = 12153640023281976235ULL;
signed char var_22 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
