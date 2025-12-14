#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -9158144966613124346LL;
unsigned long long int var_10 = 3241949738808420616ULL;
int zero = 0;
short var_19 = (short)1240;
unsigned char var_20 = (unsigned char)225;
short var_21 = (short)18800;
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
