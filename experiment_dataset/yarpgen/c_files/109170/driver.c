#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5297783010948872028ULL;
unsigned long long int var_9 = 9595529413426266391ULL;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned long long int var_15 = 10604568397930432479ULL;
unsigned long long int var_16 = 15421568598636232544ULL;
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
