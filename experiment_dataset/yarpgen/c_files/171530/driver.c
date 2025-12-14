#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1539186724;
unsigned int var_6 = 3392492268U;
long long int var_8 = -6129022653459939393LL;
int zero = 0;
unsigned long long int var_11 = 17787477188898603665ULL;
long long int var_12 = -7115672260158063128LL;
long long int var_13 = 615853253186554412LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
