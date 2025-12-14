#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11616233430916383872ULL;
unsigned short var_15 = (unsigned short)9879;
unsigned long long int var_18 = 16330205337720167897ULL;
int zero = 0;
unsigned long long int var_20 = 802203928790277997ULL;
int var_21 = -579059293;
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
