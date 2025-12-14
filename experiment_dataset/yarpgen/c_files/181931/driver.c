#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
signed char var_1 = (signed char)-103;
int var_5 = 1694928253;
unsigned short var_7 = (unsigned short)46117;
unsigned short var_9 = (unsigned short)31723;
int zero = 0;
unsigned long long int var_12 = 12664205328356670929ULL;
long long int var_13 = 8595767371176079888LL;
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
