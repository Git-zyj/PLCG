#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2354172116086975453LL;
unsigned long long int var_1 = 1240305920102857979ULL;
long long int var_4 = -3845612029090128316LL;
int var_7 = 224875239;
long long int var_8 = 791194231011527488LL;
unsigned long long int var_12 = 16993289505124453236ULL;
long long int var_15 = 4671939031101756937LL;
unsigned long long int var_16 = 8182613234282094284ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
long long int var_18 = 5439898235225117459LL;
void init() {
}

void checksum() {
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
