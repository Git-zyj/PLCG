#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
unsigned char var_3 = (unsigned char)241;
int var_8 = 601872248;
unsigned char var_14 = (unsigned char)82;
unsigned char var_15 = (unsigned char)86;
unsigned long long int var_18 = 799101029560406979ULL;
int zero = 0;
unsigned int var_19 = 2100024646U;
long long int var_20 = -7271833805790896876LL;
unsigned long long int var_21 = 12409314857106227454ULL;
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
