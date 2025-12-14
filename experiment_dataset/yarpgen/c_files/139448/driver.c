#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1972640825220309228LL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4075019923710641052ULL;
long long int var_10 = -1122646279527311074LL;
unsigned long long int var_13 = 6586510760286339617ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3296018203891138718LL;
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
