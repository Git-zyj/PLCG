#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-12;
int var_15 = 800534789;
unsigned long long int var_19 = 9852434335026711686ULL;
int zero = 0;
unsigned long long int var_20 = 14998245442128432457ULL;
long long int var_21 = -8409105504371715723LL;
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
