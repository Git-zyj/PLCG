#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2698482389306225705LL;
unsigned int var_1 = 700565630U;
unsigned int var_3 = 4220307744U;
long long int var_7 = 4148752254745236525LL;
unsigned char var_8 = (unsigned char)88;
signed char var_9 = (signed char)-72;
short var_10 = (short)32578;
int zero = 0;
signed char var_11 = (signed char)9;
unsigned char var_12 = (unsigned char)220;
unsigned short var_13 = (unsigned short)61690;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
