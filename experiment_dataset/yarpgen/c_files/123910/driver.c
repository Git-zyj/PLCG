#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2165138901U;
long long int var_1 = -3926522953495590684LL;
long long int var_7 = 7893848451540486572LL;
unsigned char var_9 = (unsigned char)23;
int zero = 0;
long long int var_14 = 5353444273452533662LL;
int var_15 = -1082754182;
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
