#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6222911633499359424LL;
long long int var_5 = -650535779189268826LL;
short var_9 = (short)21335;
int zero = 0;
unsigned char var_13 = (unsigned char)89;
unsigned int var_14 = 822957267U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
