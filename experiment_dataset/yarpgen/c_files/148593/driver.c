#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
short var_3 = (short)30057;
long long int var_5 = 162227497489059526LL;
short var_10 = (short)2381;
short var_12 = (short)-25088;
int zero = 0;
signed char var_13 = (signed char)34;
int var_14 = -1197247027;
long long int var_15 = 3486642705495555856LL;
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
