#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -732906350;
unsigned short var_12 = (unsigned short)19134;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 17643703147186449869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
