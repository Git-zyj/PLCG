#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
unsigned short var_4 = (unsigned short)48066;
int var_6 = 1393735101;
unsigned int var_10 = 1162025311U;
signed char var_12 = (signed char)-92;
long long int var_15 = 7295790596984228256LL;
unsigned long long int var_19 = 12772521974628059589ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)33893;
unsigned int var_21 = 3038750282U;
int var_22 = 1277017183;
void init() {
}

void checksum() {
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
