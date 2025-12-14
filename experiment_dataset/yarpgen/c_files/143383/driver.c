#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_1 = (signed char)108;
signed char var_3 = (signed char)-46;
unsigned short var_5 = (unsigned short)41113;
long long int var_7 = 6448201860793322734LL;
unsigned short var_9 = (unsigned short)54105;
unsigned int var_10 = 3059986797U;
int zero = 0;
int var_11 = 356047422;
unsigned int var_12 = 1288560078U;
void init() {
}

void checksum() {
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
