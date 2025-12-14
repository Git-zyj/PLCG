#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
unsigned char var_2 = (unsigned char)114;
unsigned long long int var_6 = 13523453551505547423ULL;
unsigned char var_13 = (unsigned char)213;
int zero = 0;
unsigned long long int var_15 = 17040542382940373111ULL;
unsigned long long int var_16 = 1308728291834440971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
