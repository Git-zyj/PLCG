#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17126877384291226108ULL;
unsigned long long int var_4 = 8802940076182252362ULL;
int var_5 = -1094131506;
unsigned long long int var_7 = 11689441239258445031ULL;
int var_9 = 651598053;
int zero = 0;
int var_12 = 791415588;
int var_13 = -18970426;
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
