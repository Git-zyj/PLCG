#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37822;
unsigned long long int var_3 = 10518597569305245530ULL;
unsigned short var_4 = (unsigned short)32072;
signed char var_7 = (signed char)104;
signed char var_9 = (signed char)51;
signed char var_10 = (signed char)82;
int var_14 = 1934287900;
unsigned long long int var_17 = 12641168230217401379ULL;
int zero = 0;
unsigned long long int var_20 = 5816747013268922051ULL;
long long int var_21 = -3976234294617956276LL;
signed char var_22 = (signed char)-112;
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
