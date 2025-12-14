#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
unsigned long long int var_8 = 5399941589255046017ULL;
long long int var_11 = -602921479739116365LL;
int zero = 0;
long long int var_16 = -7505637716094012769LL;
long long int var_17 = 6115319192945569055LL;
void init() {
}

void checksum() {
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
