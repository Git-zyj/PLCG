#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
unsigned char var_2 = (unsigned char)58;
unsigned char var_6 = (unsigned char)186;
long long int var_7 = -5010909754592983980LL;
long long int var_8 = -5306909003528204388LL;
long long int var_14 = -1652164274789953248LL;
int zero = 0;
long long int var_15 = 18207821330782381LL;
long long int var_16 = -3778611504598885073LL;
unsigned char var_17 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
