#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1577973672400554278LL;
unsigned char var_2 = (unsigned char)220;
unsigned long long int var_7 = 14814538602847700775ULL;
unsigned long long int var_9 = 17405122908311117989ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)148;
unsigned char var_13 = (unsigned char)156;
long long int var_14 = -1953824646364708261LL;
unsigned char var_15 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
