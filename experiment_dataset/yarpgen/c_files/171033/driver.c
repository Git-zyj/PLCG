#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38995;
unsigned short var_2 = (unsigned short)25756;
long long int var_3 = 3658042552740134088LL;
long long int var_4 = 11912075914104278LL;
unsigned long long int var_6 = 3351269966316721635ULL;
signed char var_7 = (signed char)2;
unsigned long long int var_9 = 9133293800316648844ULL;
signed char var_11 = (signed char)97;
unsigned char var_12 = (unsigned char)105;
unsigned char var_19 = (unsigned char)120;
int zero = 0;
long long int var_20 = 7063151358722537460LL;
short var_21 = (short)-6533;
unsigned long long int var_22 = 6739137720185596152ULL;
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
