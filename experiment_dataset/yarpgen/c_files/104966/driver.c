#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
long long int var_3 = 5320794083511055710LL;
unsigned long long int var_5 = 1547521517522659054ULL;
long long int var_7 = -9191286030738552903LL;
unsigned long long int var_14 = 409336895499099579ULL;
int zero = 0;
unsigned long long int var_19 = 476873314304837024ULL;
unsigned int var_20 = 12328337U;
unsigned long long int var_21 = 7463642942408111718ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
