#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)121;
short var_14 = (short)9570;
unsigned long long int var_16 = 17806785490133136520ULL;
int zero = 0;
signed char var_20 = (signed char)26;
signed char var_21 = (signed char)108;
unsigned int var_22 = 2730470324U;
unsigned char var_23 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
