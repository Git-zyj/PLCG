#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -523634368;
signed char var_5 = (signed char)-126;
unsigned long long int var_6 = 1290544190964373251ULL;
unsigned int var_13 = 1198300824U;
unsigned short var_14 = (unsigned short)50492;
unsigned long long int var_15 = 5418729841261339694ULL;
int zero = 0;
long long int var_20 = -8448804850713934698LL;
int var_21 = -1295578055;
int var_22 = 1869690392;
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
