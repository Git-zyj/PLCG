#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2146558968461524215LL;
unsigned short var_10 = (unsigned short)63563;
short var_11 = (short)1196;
int zero = 0;
unsigned short var_12 = (unsigned short)34509;
unsigned long long int var_13 = 1306113179082044470ULL;
long long int var_14 = -8650611054173091279LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
