#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6491755727608138413LL;
unsigned long long int var_7 = 13203640285341475748ULL;
unsigned long long int var_9 = 10745086563065990221ULL;
unsigned int var_13 = 629560584U;
int zero = 0;
unsigned short var_15 = (unsigned short)43091;
unsigned long long int var_16 = 6521742690314252428ULL;
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
