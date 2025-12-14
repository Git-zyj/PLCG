#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19778;
int var_3 = 1592175039;
unsigned char var_7 = (unsigned char)97;
long long int var_9 = -4400776157785945427LL;
long long int var_10 = -441358785515359001LL;
int zero = 0;
unsigned int var_11 = 3364415245U;
short var_12 = (short)-10772;
unsigned long long int var_13 = 14148444973021599510ULL;
unsigned char var_14 = (unsigned char)165;
int var_15 = -1937477569;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
