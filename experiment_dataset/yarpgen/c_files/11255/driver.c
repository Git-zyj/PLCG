#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4598461277579527124ULL;
int var_1 = -1660928757;
unsigned short var_7 = (unsigned short)15678;
unsigned long long int var_15 = 458599522669389467ULL;
int zero = 0;
long long int var_17 = 576715860069258468LL;
signed char var_18 = (signed char)9;
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
