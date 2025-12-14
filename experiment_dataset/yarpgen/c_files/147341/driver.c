#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
int var_3 = 589358511;
unsigned char var_6 = (unsigned char)186;
long long int var_7 = -1700293291802987521LL;
unsigned long long int var_12 = 4616800792182720045ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)206;
long long int var_15 = 4393500403072475602LL;
long long int var_16 = 4093262855208835926LL;
long long int var_17 = 527291672128291254LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
