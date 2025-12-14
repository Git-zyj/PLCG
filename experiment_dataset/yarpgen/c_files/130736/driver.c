#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26615;
unsigned short var_3 = (unsigned short)54799;
unsigned int var_9 = 2662310450U;
unsigned int var_10 = 3749523278U;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
unsigned short var_12 = (unsigned short)50899;
long long int var_13 = -2474411010343153863LL;
void init() {
}

void checksum() {
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
