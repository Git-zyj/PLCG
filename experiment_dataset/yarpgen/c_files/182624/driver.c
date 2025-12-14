#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned char var_1 = (unsigned char)112;
long long int var_5 = -1527644803443833818LL;
unsigned char var_6 = (unsigned char)0;
unsigned char var_8 = (unsigned char)79;
unsigned char var_16 = (unsigned char)138;
int zero = 0;
short var_17 = (short)5655;
signed char var_18 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
