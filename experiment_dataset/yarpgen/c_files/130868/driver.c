#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
int var_6 = -677708347;
signed char var_7 = (signed char)-25;
unsigned long long int var_12 = 15611585113346710269ULL;
int zero = 0;
unsigned long long int var_13 = 5938468168550746292ULL;
unsigned short var_14 = (unsigned short)39881;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
