#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1875673789;
unsigned char var_2 = (unsigned char)205;
long long int var_4 = 4371042262141796854LL;
int var_6 = 177966018;
short var_7 = (short)24447;
unsigned long long int var_9 = 10327540861855145984ULL;
int zero = 0;
long long int var_10 = -5222167831689706051LL;
short var_11 = (short)13354;
short var_12 = (short)-1439;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
