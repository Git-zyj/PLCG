#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14461548760464541266ULL;
short var_14 = (short)-27257;
unsigned char var_19 = (unsigned char)112;
int zero = 0;
short var_20 = (short)25417;
long long int var_21 = 6659504924488381310LL;
int var_22 = -1069280527;
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
