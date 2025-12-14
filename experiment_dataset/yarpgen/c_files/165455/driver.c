#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3979430889036918337ULL;
int var_4 = -1240997595;
unsigned char var_5 = (unsigned char)34;
long long int var_10 = -8129626105313478449LL;
unsigned long long int var_11 = 14353406991658293604ULL;
int zero = 0;
short var_15 = (short)18978;
unsigned int var_16 = 3850030574U;
short var_17 = (short)4563;
short var_18 = (short)-11322;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
