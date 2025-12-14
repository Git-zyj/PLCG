#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned char var_3 = (unsigned char)108;
unsigned long long int var_4 = 328771668754566064ULL;
unsigned int var_5 = 3032617425U;
unsigned long long int var_8 = 2821326831710902957ULL;
unsigned short var_9 = (unsigned short)15934;
int zero = 0;
signed char var_12 = (signed char)52;
signed char var_13 = (signed char)78;
unsigned short var_14 = (unsigned short)44724;
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
