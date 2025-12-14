#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
long long int var_3 = -8512829345547030502LL;
long long int var_4 = -1980784644110127914LL;
unsigned int var_7 = 1810764361U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 6962156645384686733ULL;
unsigned char var_14 = (unsigned char)133;
int zero = 0;
signed char var_16 = (signed char)115;
long long int var_17 = -136518876538325205LL;
unsigned long long int var_18 = 2440733129212698029ULL;
unsigned short var_19 = (unsigned short)63867;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
