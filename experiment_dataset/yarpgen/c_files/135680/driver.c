#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)59;
long long int var_14 = 7730384340294409861LL;
int zero = 0;
unsigned long long int var_15 = 4975351820742026680ULL;
unsigned char var_16 = (unsigned char)180;
signed char var_17 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
