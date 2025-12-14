#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)102;
signed char var_4 = (signed char)68;
unsigned int var_5 = 1379076242U;
unsigned char var_7 = (unsigned char)24;
unsigned int var_9 = 2816563709U;
long long int var_11 = -4300212593556263627LL;
unsigned int var_12 = 903414020U;
signed char var_14 = (signed char)105;
unsigned int var_15 = 1499889252U;
long long int var_17 = 8795433709197358315LL;
long long int var_18 = -3641214149802706772LL;
int zero = 0;
signed char var_19 = (signed char)45;
unsigned int var_20 = 2844982006U;
unsigned short var_21 = (unsigned short)63792;
unsigned short var_22 = (unsigned short)31724;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
