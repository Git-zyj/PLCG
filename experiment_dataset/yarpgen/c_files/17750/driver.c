#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4009053094U;
unsigned char var_3 = (unsigned char)86;
unsigned int var_5 = 899624929U;
long long int var_6 = 3467549428415562923LL;
unsigned char var_9 = (unsigned char)121;
int var_14 = 1223468950;
int zero = 0;
long long int var_16 = 6204919857258540287LL;
long long int var_17 = -786192336107683437LL;
long long int var_18 = 3589664745289115018LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
