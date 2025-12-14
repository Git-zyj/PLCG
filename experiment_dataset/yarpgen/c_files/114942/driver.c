#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5157089626902104974LL;
unsigned int var_9 = 3750241259U;
long long int var_11 = 6641888461339517437LL;
int zero = 0;
short var_12 = (short)7006;
unsigned char var_13 = (unsigned char)67;
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
