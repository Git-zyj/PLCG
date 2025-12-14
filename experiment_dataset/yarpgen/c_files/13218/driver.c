#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15320068020166470252ULL;
unsigned short var_2 = (unsigned short)39746;
int var_4 = 1143253208;
unsigned short var_5 = (unsigned short)61902;
unsigned short var_7 = (unsigned short)62764;
int zero = 0;
unsigned long long int var_10 = 12515233447979215070ULL;
int var_11 = 1526217728;
unsigned long long int var_12 = 7640217727295799149ULL;
unsigned long long int var_13 = 17300866106808240568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
