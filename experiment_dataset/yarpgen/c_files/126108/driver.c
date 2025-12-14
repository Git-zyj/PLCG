#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5527963358523086140ULL;
unsigned long long int var_9 = 16542780362188494825ULL;
int zero = 0;
long long int var_12 = -4915557366915319599LL;
unsigned short var_13 = (unsigned short)4048;
unsigned short var_14 = (unsigned short)39650;
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
