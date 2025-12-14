#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)126;
unsigned long long int var_5 = 12383517959122153726ULL;
int var_12 = -473907233;
int var_14 = 925162790;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
int var_19 = 168920734;
unsigned char var_20 = (unsigned char)164;
unsigned long long int var_21 = 12718713205092011599ULL;
unsigned long long int var_22 = 13800394355105219274ULL;
int var_23 = -1441701564;
unsigned long long int var_24 = 11926642090990323715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
