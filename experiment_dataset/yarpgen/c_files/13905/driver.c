#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
long long int var_3 = 4298894000440322401LL;
int var_5 = -1684756542;
unsigned char var_6 = (unsigned char)11;
short var_9 = (short)31108;
unsigned long long int var_10 = 17446130960765706097ULL;
unsigned long long int var_11 = 12986106086751900580ULL;
int zero = 0;
long long int var_13 = 1204871939342371335LL;
unsigned short var_14 = (unsigned short)59664;
long long int var_15 = 4590122064375617060LL;
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
