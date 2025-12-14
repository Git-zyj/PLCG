#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1035980247;
unsigned short var_5 = (unsigned short)45617;
unsigned char var_9 = (unsigned char)90;
long long int var_15 = 6548872370516283466LL;
int zero = 0;
int var_19 = -83439;
int var_20 = -1079916382;
_Bool var_21 = (_Bool)0;
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
