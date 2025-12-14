#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1413494697;
_Bool var_3 = (_Bool)1;
int var_6 = -1012149177;
signed char var_9 = (signed char)65;
int zero = 0;
long long int var_12 = 6289961081083897204LL;
unsigned long long int var_13 = 9464460109989659317ULL;
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
