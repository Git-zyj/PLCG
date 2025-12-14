#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3629309926061265092ULL;
int var_4 = 1842223614;
unsigned short var_9 = (unsigned short)53914;
int zero = 0;
int var_14 = -1521074102;
unsigned long long int var_15 = 6255993931932900712ULL;
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
