#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6546377821459697214ULL;
unsigned short var_6 = (unsigned short)8138;
int zero = 0;
long long int var_19 = -7551663893770273564LL;
unsigned char var_20 = (unsigned char)44;
int var_21 = 1064746615;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
