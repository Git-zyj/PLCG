#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
unsigned short var_4 = (unsigned short)24364;
unsigned char var_5 = (unsigned char)49;
int zero = 0;
long long int var_13 = -7529055335041280101LL;
long long int var_14 = 5563655600603474730LL;
long long int var_15 = -328688837227434353LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
