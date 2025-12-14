#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10155267478543690715ULL;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
unsigned int var_10 = 4193417792U;
unsigned long long int var_11 = 12283688391765781948ULL;
signed char var_12 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
