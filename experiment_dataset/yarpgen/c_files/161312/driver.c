#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-82;
short var_7 = (short)25738;
unsigned long long int var_8 = 8884519556166128740ULL;
int var_10 = -1815139125;
int zero = 0;
signed char var_14 = (signed char)109;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
