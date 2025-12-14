#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -574972370;
short var_3 = (short)-2396;
unsigned long long int var_4 = 3024633181650622510ULL;
unsigned long long int var_5 = 2197536081539884726ULL;
unsigned long long int var_9 = 17115305239422275084ULL;
unsigned long long int var_11 = 14948912784528032896ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-19971;
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
