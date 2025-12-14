#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned long long int var_4 = 4694063336237129938ULL;
unsigned short var_5 = (unsigned short)19160;
unsigned short var_9 = (unsigned short)32405;
signed char var_10 = (signed char)83;
unsigned long long int var_11 = 15272524214380673005ULL;
unsigned long long int var_17 = 12731167579792837627ULL;
int zero = 0;
signed char var_18 = (signed char)127;
int var_19 = 1629109690;
short var_20 = (short)14336;
unsigned long long int var_21 = 2385600603826558187ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
