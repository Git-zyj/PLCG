#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63499;
short var_2 = (short)-7293;
long long int var_5 = -8198222748390349537LL;
short var_6 = (short)-9897;
unsigned char var_9 = (unsigned char)59;
long long int var_12 = -6569102876240405223LL;
long long int var_14 = -612401215857011654LL;
int zero = 0;
signed char var_15 = (signed char)85;
unsigned short var_16 = (unsigned short)57363;
unsigned long long int var_17 = 16664082167278906734ULL;
long long int var_18 = 9003860364591642831LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
