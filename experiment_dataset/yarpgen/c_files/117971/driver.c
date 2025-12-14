#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
long long int var_1 = -7034657122905462665LL;
long long int var_2 = -9081167004192079845LL;
long long int var_3 = -3011087218005883565LL;
long long int var_5 = 99651753612170724LL;
unsigned short var_11 = (unsigned short)17088;
short var_12 = (short)30680;
int zero = 0;
long long int var_16 = -8152852682436227489LL;
unsigned char var_17 = (unsigned char)4;
unsigned long long int var_18 = 172768598393424930ULL;
unsigned char var_19 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
