#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
unsigned char var_1 = (unsigned char)254;
unsigned char var_4 = (unsigned char)102;
unsigned char var_6 = (unsigned char)116;
unsigned char var_7 = (unsigned char)134;
unsigned long long int var_8 = 2658625577107578986ULL;
unsigned long long int var_10 = 16941572554568787288ULL;
unsigned long long int var_11 = 13824122957197955374ULL;
unsigned long long int var_12 = 1264387602942375453ULL;
unsigned char var_13 = (unsigned char)179;
int zero = 0;
unsigned char var_14 = (unsigned char)246;
unsigned long long int var_15 = 7235023696674856276ULL;
unsigned char var_16 = (unsigned char)231;
unsigned long long int var_17 = 1438309433212559772ULL;
unsigned long long int var_18 = 18244002742417710878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
