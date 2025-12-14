#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4942178466719390511LL;
long long int var_4 = 8319825382063785872LL;
unsigned char var_6 = (unsigned char)148;
short var_7 = (short)20328;
unsigned char var_9 = (unsigned char)47;
short var_10 = (short)23121;
int zero = 0;
long long int var_11 = 6896796047000582197LL;
long long int var_12 = -5610526671090290477LL;
long long int var_13 = 6757734978253850880LL;
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
