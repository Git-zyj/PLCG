#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 3531578568705978336ULL;
unsigned char var_4 = (unsigned char)5;
signed char var_7 = (signed char)-109;
unsigned long long int var_8 = 1236547588999993335ULL;
unsigned char var_9 = (unsigned char)194;
unsigned long long int var_12 = 14539153879443111440ULL;
int zero = 0;
unsigned long long int var_13 = 16600324922262870414ULL;
unsigned long long int var_14 = 591434408856004967ULL;
void init() {
}

void checksum() {
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
