#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9633682225734694267ULL;
unsigned long long int var_4 = 11311315227061682853ULL;
unsigned char var_14 = (unsigned char)114;
int zero = 0;
unsigned long long int var_20 = 7457926382861620479ULL;
unsigned char var_21 = (unsigned char)112;
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
