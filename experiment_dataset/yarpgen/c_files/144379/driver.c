#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8350590620348630997LL;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-24068;
int zero = 0;
long long int var_10 = -5632662508760951595LL;
long long int var_11 = 7927684474206432035LL;
unsigned char var_12 = (unsigned char)161;
unsigned long long int var_13 = 9796353415650090966ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
