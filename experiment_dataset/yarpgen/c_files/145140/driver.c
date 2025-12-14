#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3736276670946566203LL;
unsigned short var_4 = (unsigned short)61291;
long long int var_7 = 7953208343784973406LL;
int zero = 0;
long long int var_12 = 7474272200377053522LL;
signed char var_13 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
