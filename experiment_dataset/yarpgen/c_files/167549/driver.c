#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5228337303928903352LL;
unsigned short var_1 = (unsigned short)11108;
short var_6 = (short)-728;
int zero = 0;
unsigned short var_18 = (unsigned short)507;
signed char var_19 = (signed char)78;
unsigned char var_20 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
