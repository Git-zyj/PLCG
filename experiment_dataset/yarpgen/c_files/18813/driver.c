#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39898;
_Bool var_1 = (_Bool)0;
unsigned int var_8 = 2780515118U;
signed char var_9 = (signed char)68;
unsigned short var_15 = (unsigned short)17419;
int zero = 0;
unsigned int var_18 = 3413405997U;
unsigned short var_19 = (unsigned short)38501;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)28;
signed char var_22 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
