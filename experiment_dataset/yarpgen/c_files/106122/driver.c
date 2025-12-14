#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
int var_2 = -872013631;
unsigned char var_8 = (unsigned char)55;
long long int var_9 = -8796054376316680163LL;
long long int var_10 = 1389358061242251990LL;
int zero = 0;
unsigned char var_12 = (unsigned char)131;
int var_13 = -1536658739;
long long int var_14 = 130502116494068031LL;
long long int var_15 = 4829109287476501743LL;
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
