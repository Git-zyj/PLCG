#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7313656338480089999LL;
unsigned char var_7 = (unsigned char)118;
unsigned long long int var_10 = 14764947036191681719ULL;
long long int var_11 = -3237021286237177668LL;
int zero = 0;
unsigned short var_12 = (unsigned short)8835;
long long int var_13 = -8611608766062274938LL;
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
