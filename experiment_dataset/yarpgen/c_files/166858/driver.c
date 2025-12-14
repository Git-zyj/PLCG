#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned char var_4 = (unsigned char)201;
long long int var_7 = 4085991192195184906LL;
long long int var_8 = 2946483663367557969LL;
long long int var_10 = -7638929251835511846LL;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
unsigned char var_12 = (unsigned char)100;
long long int var_13 = 3336708899891023512LL;
unsigned char var_14 = (unsigned char)37;
signed char var_15 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
