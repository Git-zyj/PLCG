#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7131984390435708465ULL;
unsigned char var_5 = (unsigned char)40;
unsigned char var_9 = (unsigned char)124;
_Bool var_11 = (_Bool)0;
unsigned int var_17 = 456311131U;
int zero = 0;
unsigned short var_19 = (unsigned short)43487;
unsigned long long int var_20 = 14268159543149113476ULL;
short var_21 = (short)22601;
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
