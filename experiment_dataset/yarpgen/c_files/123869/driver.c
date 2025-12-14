#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1573551706535344573LL;
unsigned long long int var_3 = 102758601262993920ULL;
unsigned long long int var_6 = 11535126013606867031ULL;
int zero = 0;
short var_12 = (short)-2554;
long long int var_13 = -540946783278824184LL;
void init() {
}

void checksum() {
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
