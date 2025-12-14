#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2703723131893130691LL;
unsigned short var_6 = (unsigned short)64970;
unsigned long long int var_7 = 7006640047648338012ULL;
short var_11 = (short)-27138;
int zero = 0;
short var_20 = (short)-15448;
short var_21 = (short)31547;
unsigned long long int var_22 = 18331857384497955434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
