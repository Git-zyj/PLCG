#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3015402183116791015LL;
unsigned char var_5 = (unsigned char)139;
unsigned long long int var_7 = 11046427109546912562ULL;
unsigned long long int var_8 = 12257455973905152505ULL;
long long int var_10 = -3848906326565138972LL;
unsigned long long int var_11 = 210290633492739810ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)41006;
unsigned int var_13 = 1707420870U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
