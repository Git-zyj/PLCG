#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-26326;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3478314375U;
long long int var_11 = 2477065745188967896LL;
int zero = 0;
unsigned int var_19 = 2841119764U;
unsigned char var_20 = (unsigned char)71;
unsigned short var_21 = (unsigned short)55710;
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
