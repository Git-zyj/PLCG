#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)118;
unsigned short var_3 = (unsigned short)42205;
int var_5 = 1059218649;
int var_9 = -1905024484;
int zero = 0;
unsigned int var_10 = 3054388757U;
signed char var_11 = (signed char)-121;
long long int var_12 = -8935034926296285969LL;
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
