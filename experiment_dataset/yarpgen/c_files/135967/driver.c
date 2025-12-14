#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_16 = -8615498924767030492LL;
unsigned char var_18 = (unsigned char)51;
int zero = 0;
int var_19 = 1939852109;
short var_20 = (short)-3605;
long long int var_21 = -3750566415256066545LL;
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
