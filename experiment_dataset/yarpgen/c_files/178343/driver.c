#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
unsigned long long int var_2 = 18025107625864465167ULL;
unsigned long long int var_3 = 6216350840558793214ULL;
unsigned char var_4 = (unsigned char)244;
unsigned char var_7 = (unsigned char)104;
unsigned short var_11 = (unsigned short)4753;
long long int var_13 = 2835146627968001131LL;
int zero = 0;
long long int var_14 = 1106221743805908444LL;
long long int var_15 = 2144656462583993282LL;
unsigned char var_16 = (unsigned char)121;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
