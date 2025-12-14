#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 931225425824815594ULL;
unsigned int var_5 = 1624130554U;
long long int var_6 = -6139015139384304355LL;
long long int var_7 = 3716681081044077584LL;
unsigned long long int var_11 = 15465960394020971831ULL;
long long int var_12 = 4971663802139158177LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-21117;
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
