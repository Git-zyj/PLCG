#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)71;
unsigned char var_5 = (unsigned char)197;
unsigned char var_6 = (unsigned char)50;
long long int var_8 = -6152271484502918075LL;
long long int var_13 = 9216245585668665380LL;
long long int var_14 = 3490569478727191416LL;
int zero = 0;
long long int var_17 = 4665710999983644193LL;
unsigned char var_18 = (unsigned char)194;
long long int var_19 = 3411033563833919136LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
