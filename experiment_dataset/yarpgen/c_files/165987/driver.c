#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3269415957533063607LL;
long long int var_11 = 4434350848219472619LL;
long long int var_14 = 2715782447532661913LL;
int zero = 0;
signed char var_18 = (signed char)77;
signed char var_19 = (signed char)-3;
void init() {
}

void checksum() {
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
