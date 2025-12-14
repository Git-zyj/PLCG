#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)17;
unsigned int var_4 = 2904323903U;
long long int var_5 = 3951623895886293551LL;
long long int var_6 = 5609954422412947627LL;
long long int var_7 = 456643562601951145LL;
unsigned long long int var_8 = 17734240516854817958ULL;
unsigned char var_9 = (unsigned char)172;
short var_11 = (short)30566;
unsigned int var_14 = 2116542475U;
int zero = 0;
short var_17 = (short)1593;
short var_18 = (short)-24578;
int var_19 = 60428729;
unsigned char var_20 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
