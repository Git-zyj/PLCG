#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-887;
long long int var_8 = 5555416350343442644LL;
short var_9 = (short)-16031;
short var_11 = (short)31987;
unsigned long long int var_12 = 8935478877394890327ULL;
int zero = 0;
int var_17 = 162044307;
unsigned long long int var_18 = 3557731759304245276ULL;
void init() {
}

void checksum() {
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
