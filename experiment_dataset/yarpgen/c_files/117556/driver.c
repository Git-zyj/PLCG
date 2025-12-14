#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3271714193U;
unsigned short var_3 = (unsigned short)4340;
long long int var_4 = 4000040706850350556LL;
int var_9 = 620999527;
int var_10 = -1075993309;
long long int var_11 = -2817022129432904566LL;
int zero = 0;
unsigned int var_13 = 1488123014U;
unsigned long long int var_14 = 17129195442564697792ULL;
unsigned char var_15 = (unsigned char)226;
void init() {
}

void checksum() {
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
