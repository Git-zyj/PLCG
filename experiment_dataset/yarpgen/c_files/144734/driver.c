#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3624005867958505629LL;
short var_1 = (short)-16940;
unsigned long long int var_2 = 380889749446375808ULL;
long long int var_5 = -3217709667888567672LL;
long long int var_7 = -4844740214508284056LL;
int zero = 0;
short var_10 = (short)-12846;
short var_11 = (short)-2818;
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
