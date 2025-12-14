#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7726688879371617029LL;
long long int var_2 = -645368786462885862LL;
long long int var_8 = -9168236333014053356LL;
unsigned short var_9 = (unsigned short)62134;
int zero = 0;
int var_15 = -174306049;
short var_16 = (short)28390;
unsigned long long int var_17 = 9449705545774135215ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
