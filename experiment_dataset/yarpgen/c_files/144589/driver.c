#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14143;
int var_5 = -1888622713;
long long int var_17 = 725505838426429161LL;
int zero = 0;
unsigned long long int var_20 = 5818596734351506070ULL;
long long int var_21 = 7568810150910664641LL;
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
