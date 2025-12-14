#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2210735818691972149LL;
int var_5 = 445940218;
int var_8 = -1327849389;
long long int var_14 = 419784817954244736LL;
int zero = 0;
unsigned short var_20 = (unsigned short)27681;
signed char var_21 = (signed char)17;
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
