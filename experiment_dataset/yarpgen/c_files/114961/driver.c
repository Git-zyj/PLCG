#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -955824152229826446LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 16845992663244680019ULL;
int var_6 = -1123285582;
unsigned char var_9 = (unsigned char)206;
int zero = 0;
signed char var_10 = (signed char)-68;
signed char var_11 = (signed char)4;
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
