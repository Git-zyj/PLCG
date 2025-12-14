#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3731643084U;
unsigned long long int var_6 = 10799520712553929186ULL;
signed char var_9 = (signed char)9;
unsigned long long int var_11 = 9389195460689783965ULL;
int zero = 0;
unsigned long long int var_12 = 15312866202365442854ULL;
int var_13 = 382306549;
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
