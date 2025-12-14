#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7217;
unsigned char var_3 = (unsigned char)169;
unsigned long long int var_9 = 9705498257814639372ULL;
unsigned long long int var_11 = 14265155271274542221ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
short var_13 = (short)-16788;
unsigned short var_14 = (unsigned short)16981;
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
