#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 383354659;
unsigned char var_8 = (unsigned char)117;
unsigned char var_13 = (unsigned char)94;
int var_15 = 1278533580;
int zero = 0;
unsigned long long int var_19 = 12677723283827034152ULL;
unsigned short var_20 = (unsigned short)53006;
int var_21 = -1801204493;
unsigned long long int var_22 = 11092931933533277218ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
