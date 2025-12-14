#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned short var_1 = (unsigned short)27463;
unsigned char var_3 = (unsigned char)217;
unsigned char var_4 = (unsigned char)180;
unsigned int var_8 = 1974241837U;
int zero = 0;
long long int var_10 = -6961153693058004357LL;
unsigned short var_11 = (unsigned short)60381;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
