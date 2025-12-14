#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1074277516479088885LL;
short var_4 = (short)32107;
int var_9 = 1571774265;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)120;
unsigned char var_20 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
