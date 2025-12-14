#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4057165395643600880ULL;
unsigned long long int var_6 = 18043317261729356684ULL;
long long int var_9 = 3982781886167293547LL;
unsigned long long int var_10 = 13813709654905405294ULL;
short var_11 = (short)32311;
unsigned long long int var_14 = 5208276794485345706ULL;
unsigned long long int var_17 = 14169076347727260369ULL;
signed char var_19 = (signed char)99;
int zero = 0;
short var_20 = (short)-21925;
int var_21 = -974034650;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
