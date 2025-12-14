#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17826323805147953580ULL;
long long int var_3 = 1508101091980222400LL;
long long int var_4 = -3513909687860019238LL;
signed char var_9 = (signed char)-28;
int zero = 0;
int var_12 = -855922953;
short var_13 = (short)-28153;
unsigned char var_14 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
