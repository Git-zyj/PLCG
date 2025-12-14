#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16584498179642991962ULL;
long long int var_10 = -5424021631063195667LL;
signed char var_11 = (signed char)112;
unsigned short var_14 = (unsigned short)56469;
int zero = 0;
unsigned short var_18 = (unsigned short)60737;
unsigned char var_19 = (unsigned char)160;
int var_20 = -470408567;
_Bool var_21 = (_Bool)1;
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
