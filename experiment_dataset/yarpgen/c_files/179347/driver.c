#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5886317099490272154LL;
unsigned short var_6 = (unsigned short)47671;
long long int var_7 = 8212576236100144890LL;
long long int var_9 = -3994281038978593542LL;
short var_10 = (short)-2435;
short var_11 = (short)30471;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
_Bool var_13 = (_Bool)1;
long long int var_14 = -816447280654888833LL;
unsigned char var_15 = (unsigned char)45;
void init() {
}

void checksum() {
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
