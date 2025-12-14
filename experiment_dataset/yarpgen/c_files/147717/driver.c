#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8160708469012524869LL;
signed char var_1 = (signed char)-50;
long long int var_3 = 6166127300364079954LL;
long long int var_5 = -4410888020033285499LL;
unsigned int var_6 = 2804681886U;
signed char var_8 = (signed char)-123;
long long int var_9 = 7415003173204664416LL;
int zero = 0;
unsigned short var_10 = (unsigned short)45341;
unsigned long long int var_11 = 17005145894468767976ULL;
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
