#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6658286803566681124LL;
unsigned char var_1 = (unsigned char)46;
long long int var_3 = 891814744515925812LL;
long long int var_5 = -4209011629829671900LL;
signed char var_6 = (signed char)-51;
unsigned short var_10 = (unsigned short)16561;
int zero = 0;
long long int var_13 = 3551961343615716873LL;
int var_14 = 1554547994;
unsigned short var_15 = (unsigned short)18262;
void init() {
}

void checksum() {
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
