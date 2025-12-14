#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1711400726053255169LL;
unsigned short var_9 = (unsigned short)6499;
unsigned char var_10 = (unsigned char)186;
int zero = 0;
long long int var_12 = 3909682655449825448LL;
long long int var_13 = -8900635189968724108LL;
long long int var_14 = 5650569594166590576LL;
long long int var_15 = -1326710276504654009LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
