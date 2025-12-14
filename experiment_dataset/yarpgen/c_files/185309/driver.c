#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2659787714172419108ULL;
signed char var_5 = (signed char)-95;
unsigned long long int var_9 = 5225880367473640028ULL;
int var_15 = 1042879199;
int zero = 0;
short var_20 = (short)-19192;
signed char var_21 = (signed char)-96;
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
