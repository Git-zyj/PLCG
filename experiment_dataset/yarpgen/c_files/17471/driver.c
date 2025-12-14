#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13841300827673711821ULL;
long long int var_4 = 1287479096660545217LL;
long long int var_8 = -5494638360764412078LL;
unsigned int var_9 = 3987467517U;
int zero = 0;
long long int var_16 = -8650541953218681653LL;
int var_17 = -1149746701;
int var_18 = 843027249;
unsigned short var_19 = (unsigned short)40583;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
