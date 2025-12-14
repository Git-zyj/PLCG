#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9552306644322657232ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 2671329329261218559ULL;
long long int var_6 = -1292502031886081244LL;
signed char var_7 = (signed char)-2;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 3784910127709944701ULL;
int zero = 0;
signed char var_11 = (signed char)91;
unsigned long long int var_12 = 2849315070425928993ULL;
unsigned long long int var_13 = 10509012267157050960ULL;
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
