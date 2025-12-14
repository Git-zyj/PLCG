#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2609059755903890130LL;
signed char var_7 = (signed char)110;
_Bool var_8 = (_Bool)1;
long long int var_13 = 7685457623292430166LL;
unsigned char var_15 = (unsigned char)248;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)190;
unsigned long long int var_20 = 16139427867872110439ULL;
unsigned short var_21 = (unsigned short)58788;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
