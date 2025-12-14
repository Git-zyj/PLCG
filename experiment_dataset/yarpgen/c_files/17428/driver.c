#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -83712776832982874LL;
unsigned long long int var_8 = 16354421201829519025ULL;
int zero = 0;
long long int var_11 = 3202095744975918443LL;
unsigned short var_12 = (unsigned short)27408;
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
