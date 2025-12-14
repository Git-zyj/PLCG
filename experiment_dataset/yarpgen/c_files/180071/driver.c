#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4150058662437744447ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 4529572683441678682ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
unsigned char var_13 = (unsigned char)67;
short var_14 = (short)465;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
