#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29578;
int var_7 = 2005172501;
signed char var_8 = (signed char)-94;
long long int var_10 = 8794371829614896671LL;
long long int var_11 = -1399977820705383072LL;
unsigned long long int var_14 = 1764938565143271675ULL;
int zero = 0;
int var_15 = 1340703306;
int var_16 = -1737904932;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
