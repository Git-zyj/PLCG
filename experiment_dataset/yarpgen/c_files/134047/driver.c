#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)112;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8549821421959644215ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 374735791190321852ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53127;
int var_12 = -579395433;
void init() {
}

void checksum() {
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
