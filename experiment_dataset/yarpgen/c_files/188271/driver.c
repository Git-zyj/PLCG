#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 977750165541611914LL;
unsigned long long int var_5 = 15375698382934126964ULL;
int var_8 = -1299003950;
long long int var_9 = -6020490947861219831LL;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
short var_13 = (short)3205;
short var_14 = (short)19090;
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
