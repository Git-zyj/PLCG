#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8132385376091541940LL;
unsigned char var_5 = (unsigned char)189;
short var_6 = (short)-11165;
long long int var_8 = 4861552676675406689LL;
long long int var_9 = 3744299629061367382LL;
signed char var_11 = (signed char)-20;
int zero = 0;
unsigned char var_13 = (unsigned char)173;
unsigned int var_14 = 2172474876U;
signed char var_15 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
