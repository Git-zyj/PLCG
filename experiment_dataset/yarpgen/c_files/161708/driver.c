#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 863562116U;
long long int var_2 = -8293665865080123422LL;
unsigned long long int var_8 = 7546058064327051118ULL;
unsigned long long int var_9 = 8362609917479462690ULL;
unsigned int var_11 = 3326159850U;
long long int var_12 = 8694740196922565562LL;
unsigned long long int var_13 = 9420897244843440300ULL;
unsigned int var_14 = 669021605U;
long long int var_15 = -4033948231476652821LL;
int zero = 0;
unsigned int var_16 = 151053165U;
unsigned short var_17 = (unsigned short)10837;
unsigned int var_18 = 2761984011U;
void init() {
}

void checksum() {
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
