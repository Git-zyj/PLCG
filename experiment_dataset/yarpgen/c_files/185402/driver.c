#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1158318591;
unsigned long long int var_6 = 16428704229017798393ULL;
unsigned char var_7 = (unsigned char)169;
int var_9 = -1565731884;
int zero = 0;
unsigned char var_10 = (unsigned char)68;
int var_11 = 1743948385;
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
