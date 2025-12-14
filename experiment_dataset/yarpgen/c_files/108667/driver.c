#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-10930;
short var_12 = (short)9001;
unsigned char var_15 = (unsigned char)87;
short var_17 = (short)20200;
int zero = 0;
unsigned long long int var_20 = 12982825542190855721ULL;
long long int var_21 = 8312968163813262129LL;
void init() {
}

void checksum() {
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
