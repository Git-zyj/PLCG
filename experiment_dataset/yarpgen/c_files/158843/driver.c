#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7566;
unsigned long long int var_2 = 7254038018485461865ULL;
unsigned long long int var_6 = 13309787562576627908ULL;
long long int var_8 = 2497790009131368171LL;
signed char var_9 = (signed char)90;
short var_10 = (short)-3293;
signed char var_12 = (signed char)39;
long long int var_14 = -8687691111335017843LL;
int zero = 0;
short var_15 = (short)5582;
short var_16 = (short)25852;
long long int var_17 = 5805712456234823132LL;
unsigned char var_18 = (unsigned char)226;
unsigned long long int var_19 = 2715678238474466896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
