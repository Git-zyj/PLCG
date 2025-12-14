#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_3 = 1788297567776768514ULL;
unsigned long long int var_5 = 13976060864075739505ULL;
int zero = 0;
long long int var_17 = 8183817540773221432LL;
long long int var_18 = 6433112363922147422LL;
long long int var_19 = 2288757171515272233LL;
void init() {
}

void checksum() {
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
