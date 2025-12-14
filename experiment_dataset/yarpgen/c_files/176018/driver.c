#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)121;
unsigned char var_7 = (unsigned char)175;
int var_12 = -2095401164;
unsigned char var_16 = (unsigned char)150;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1393178621886930289LL;
long long int var_21 = 8168591827008309407LL;
void init() {
}

void checksum() {
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
