#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-98;
long long int var_7 = 8144782570775611260LL;
unsigned long long int var_8 = 8061821820643633636ULL;
unsigned char var_19 = (unsigned char)88;
int zero = 0;
unsigned long long int var_20 = 5494457766315917848ULL;
unsigned char var_21 = (unsigned char)36;
unsigned short var_22 = (unsigned short)53503;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
