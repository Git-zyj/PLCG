#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
signed char var_2 = (signed char)14;
signed char var_4 = (signed char)-117;
long long int var_6 = -6518201864860555330LL;
unsigned int var_7 = 223320140U;
unsigned int var_9 = 1399164228U;
signed char var_10 = (signed char)-2;
unsigned int var_11 = 456767190U;
unsigned char var_13 = (unsigned char)66;
signed char var_14 = (signed char)40;
unsigned int var_15 = 3409330209U;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
unsigned int var_18 = 453619391U;
unsigned int var_19 = 3239191000U;
void init() {
}

void checksum() {
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
