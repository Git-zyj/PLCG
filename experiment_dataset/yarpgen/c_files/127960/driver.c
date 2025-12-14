#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18323812770153522244ULL;
unsigned char var_2 = (unsigned char)77;
int var_3 = -557591499;
long long int var_4 = 6034255881274147577LL;
unsigned long long int var_5 = 14481808495108194928ULL;
unsigned int var_8 = 3043173814U;
int var_11 = -1529556396;
int zero = 0;
unsigned long long int var_13 = 1076078897182236722ULL;
int var_14 = -1271132055;
int var_15 = -1659066664;
unsigned int var_16 = 2083741704U;
int var_17 = -1711745183;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
