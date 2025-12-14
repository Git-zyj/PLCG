#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27934;
signed char var_3 = (signed char)58;
unsigned long long int var_4 = 12910096163500232770ULL;
unsigned short var_5 = (unsigned short)4008;
unsigned short var_6 = (unsigned short)49158;
signed char var_7 = (signed char)-54;
unsigned int var_9 = 1618236904U;
unsigned long long int var_10 = 12327550624615596993ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5359349759890962706ULL;
signed char var_15 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
