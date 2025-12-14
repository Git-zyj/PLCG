#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21886;
short var_2 = (short)22469;
int var_3 = 1554142079;
signed char var_4 = (signed char)65;
unsigned char var_7 = (unsigned char)108;
int zero = 0;
unsigned long long int var_12 = 17542152011339133775ULL;
unsigned long long int var_13 = 8138382369266669970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
