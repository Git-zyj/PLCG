#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4835108983337031981LL;
unsigned short var_1 = (unsigned short)6621;
long long int var_2 = 6222185628885270990LL;
unsigned short var_5 = (unsigned short)2258;
unsigned long long int var_8 = 15999963975779296231ULL;
unsigned short var_10 = (unsigned short)37659;
int zero = 0;
long long int var_14 = -2792875225346749403LL;
unsigned char var_15 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
