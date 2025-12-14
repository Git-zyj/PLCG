#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_2 = (signed char)-15;
int var_3 = 1379785280;
int var_4 = -2142068957;
int var_6 = -1606120756;
long long int var_16 = 1272284196449478837LL;
int zero = 0;
short var_20 = (short)-29796;
int var_21 = 2146138551;
signed char var_22 = (signed char)-125;
short var_23 = (short)7644;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
