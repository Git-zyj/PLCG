#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28898;
unsigned char var_4 = (unsigned char)115;
int var_5 = 1370253601;
unsigned short var_8 = (unsigned short)5605;
long long int var_13 = -6191168470284790336LL;
long long int var_14 = -1782282960428721930LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-31110;
void init() {
}

void checksum() {
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
