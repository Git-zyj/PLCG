#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3447001946108280789LL;
long long int var_7 = -5459877451615052102LL;
long long int var_8 = 4484497990369383577LL;
long long int var_14 = -1839347396105885498LL;
int zero = 0;
long long int var_20 = 6512024323556087221LL;
long long int var_21 = 4371332601820531957LL;
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
