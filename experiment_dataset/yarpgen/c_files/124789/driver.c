#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1072576269;
long long int var_5 = -4741518318810826945LL;
int var_7 = 299045866;
long long int var_9 = -1398129301077288070LL;
long long int var_15 = -7309479491405578784LL;
int zero = 0;
long long int var_17 = -1542132865386110449LL;
long long int var_18 = 5420744037652483381LL;
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
