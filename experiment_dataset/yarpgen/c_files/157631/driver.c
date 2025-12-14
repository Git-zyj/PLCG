#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1658795374;
unsigned short var_5 = (unsigned short)30453;
signed char var_11 = (signed char)125;
signed char var_12 = (signed char)69;
long long int var_15 = -5940215032321218720LL;
long long int var_19 = -29232962008143956LL;
int zero = 0;
int var_20 = -1946038250;
unsigned int var_21 = 1976573486U;
long long int var_22 = -8757829961395878228LL;
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
