#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-26;
unsigned char var_4 = (unsigned char)155;
unsigned char var_7 = (unsigned char)53;
int var_13 = 1956904522;
signed char var_17 = (signed char)-38;
int zero = 0;
signed char var_18 = (signed char)123;
unsigned long long int var_19 = 13472990747571099822ULL;
long long int var_20 = -9175239670921275876LL;
unsigned int var_21 = 3709223082U;
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
