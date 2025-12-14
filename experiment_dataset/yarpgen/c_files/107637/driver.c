#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5414558375421631732LL;
short var_6 = (short)22977;
unsigned long long int var_11 = 17964649191579311391ULL;
int zero = 0;
signed char var_15 = (signed char)127;
unsigned char var_16 = (unsigned char)160;
unsigned long long int var_17 = 9311623676611971815ULL;
void init() {
}

void checksum() {
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
