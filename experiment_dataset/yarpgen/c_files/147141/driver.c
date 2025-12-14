#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 118642265651413687LL;
long long int var_8 = -7144335142883169736LL;
unsigned long long int var_10 = 15855691842739625101ULL;
long long int var_11 = -6371038953126730573LL;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
long long int var_19 = 6307876068197211033LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
