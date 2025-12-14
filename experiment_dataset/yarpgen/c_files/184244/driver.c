#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)58;
int var_8 = -1173728063;
short var_11 = (short)-30020;
long long int var_13 = -6675448740315545608LL;
short var_14 = (short)-24542;
int zero = 0;
long long int var_18 = -6286272654246036239LL;
long long int var_19 = -3305966139835801095LL;
void init() {
}

void checksum() {
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
