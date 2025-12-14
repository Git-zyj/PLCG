#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
unsigned int var_2 = 4231749579U;
long long int var_9 = -6346756461536932150LL;
int zero = 0;
unsigned char var_10 = (unsigned char)191;
long long int var_11 = 416250856985318912LL;
unsigned short var_12 = (unsigned short)59340;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
