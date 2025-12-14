#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)21089;
unsigned char var_10 = (unsigned char)219;
int var_15 = -288318806;
int zero = 0;
long long int var_19 = -4912821313230233937LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)4861;
unsigned char var_22 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
