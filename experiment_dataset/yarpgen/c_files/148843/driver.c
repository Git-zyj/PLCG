#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-3;
unsigned long long int var_6 = 6572493932778998058ULL;
long long int var_9 = 6865398987796084978LL;
int zero = 0;
signed char var_10 = (signed char)10;
signed char var_11 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
