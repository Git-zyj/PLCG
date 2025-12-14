#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)20;
unsigned char var_7 = (unsigned char)32;
long long int var_8 = -2666426330137497364LL;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
unsigned char var_10 = (unsigned char)178;
unsigned char var_11 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
