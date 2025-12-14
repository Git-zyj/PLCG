#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40864;
int var_5 = 1058365575;
long long int var_10 = 4673088959770079555LL;
signed char var_18 = (signed char)-125;
int zero = 0;
signed char var_20 = (signed char)107;
signed char var_21 = (signed char)23;
unsigned char var_22 = (unsigned char)138;
int var_23 = 1828983187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
