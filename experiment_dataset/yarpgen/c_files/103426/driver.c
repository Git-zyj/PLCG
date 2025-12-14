#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16566;
long long int var_2 = -110445149257180803LL;
signed char var_3 = (signed char)-39;
unsigned char var_6 = (unsigned char)49;
short var_7 = (short)-5787;
short var_8 = (short)5796;
signed char var_9 = (signed char)-104;
unsigned short var_10 = (unsigned short)57266;
long long int var_11 = 1018095468763604560LL;
int zero = 0;
long long int var_12 = 8470442413565030496LL;
signed char var_13 = (signed char)-39;
void init() {
}

void checksum() {
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
