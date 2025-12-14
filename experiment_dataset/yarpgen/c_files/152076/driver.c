#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 408724332U;
unsigned char var_15 = (unsigned char)3;
int zero = 0;
unsigned long long int var_19 = 12109352208857365845ULL;
long long int var_20 = 3510673246185807299LL;
int var_21 = -1760677124;
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
