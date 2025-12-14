#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 590866164U;
unsigned short var_7 = (unsigned short)56004;
int zero = 0;
unsigned long long int var_10 = 12233831159115245212ULL;
unsigned long long int var_11 = 14105102287828596048ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
