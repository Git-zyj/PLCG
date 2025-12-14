#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1201988662;
unsigned long long int var_4 = 12277234134859775057ULL;
signed char var_10 = (signed char)-51;
short var_15 = (short)28596;
int zero = 0;
int var_17 = -1739155187;
long long int var_18 = 7862066496302876523LL;
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
