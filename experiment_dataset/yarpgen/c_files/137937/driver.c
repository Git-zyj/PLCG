#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4245524164203117561LL;
short var_3 = (short)30437;
long long int var_5 = -8611546540437662170LL;
long long int var_9 = -9178212510849627836LL;
short var_10 = (short)-20217;
int zero = 0;
long long int var_11 = 8307373171447263931LL;
long long int var_12 = 5358518190002075328LL;
int var_13 = 212628935;
int var_14 = 652221750;
int var_15 = -960419803;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
