#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
int var_1 = -591683721;
long long int var_3 = 6620136875438744221LL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2866368377U;
unsigned int var_9 = 3011131814U;
signed char var_10 = (signed char)-43;
long long int var_11 = -4312045018026074635LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)17187;
int zero = 0;
short var_17 = (short)-31241;
unsigned short var_18 = (unsigned short)35673;
short var_19 = (short)25683;
long long int var_20 = -8046090419006932317LL;
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
