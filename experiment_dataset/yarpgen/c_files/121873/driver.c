#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1203016974;
int var_1 = 473580348;
unsigned int var_3 = 684542560U;
unsigned long long int var_4 = 3334997723465604751ULL;
long long int var_5 = 6844146282799415781LL;
signed char var_6 = (signed char)96;
int var_8 = 438359644;
unsigned char var_10 = (unsigned char)52;
int var_11 = 266610787;
unsigned char var_15 = (unsigned char)69;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = 2185269;
int var_20 = 717387061;
_Bool var_21 = (_Bool)1;
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
