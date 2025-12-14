#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1155279346;
unsigned long long int var_18 = 16808709385625268223ULL;
int zero = 0;
unsigned int var_20 = 1627076750U;
unsigned char var_21 = (unsigned char)178;
long long int var_22 = -8336070298070549098LL;
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
