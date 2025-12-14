#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6097704231124517832LL;
int var_4 = -661709296;
int var_5 = 1114024887;
long long int var_6 = -2831773261100228229LL;
int var_9 = -121565736;
short var_12 = (short)24830;
unsigned char var_16 = (unsigned char)197;
int zero = 0;
int var_20 = -1505203708;
unsigned short var_21 = (unsigned short)4068;
short var_22 = (short)11234;
long long int var_23 = -5473720914880607193LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
