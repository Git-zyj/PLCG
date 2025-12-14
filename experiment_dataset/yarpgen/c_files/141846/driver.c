#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8535768510671985037LL;
long long int var_13 = -5080449816925385102LL;
int zero = 0;
int var_14 = 1346701308;
unsigned long long int var_15 = 7663543576630644662ULL;
unsigned char var_16 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
