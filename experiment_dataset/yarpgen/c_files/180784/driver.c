#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
long long int var_3 = 4353853837528448696LL;
unsigned long long int var_8 = 11895186551331216609ULL;
signed char var_9 = (signed char)-73;
int zero = 0;
short var_12 = (short)9616;
int var_13 = -1177558396;
short var_14 = (short)-1218;
unsigned char var_15 = (unsigned char)231;
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
