#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)78;
unsigned short var_9 = (unsigned short)23221;
unsigned short var_11 = (unsigned short)24238;
short var_13 = (short)-21903;
unsigned long long int var_14 = 10389521082049070620ULL;
int zero = 0;
short var_19 = (short)-14835;
signed char var_20 = (signed char)-112;
void init() {
}

void checksum() {
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
