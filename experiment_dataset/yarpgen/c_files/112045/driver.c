#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2752243436733075913ULL;
unsigned int var_3 = 4024918316U;
unsigned int var_6 = 1979536928U;
unsigned int var_9 = 1698470248U;
_Bool var_10 = (_Bool)1;
unsigned char var_16 = (unsigned char)68;
int zero = 0;
long long int var_17 = 1097823044059880414LL;
short var_18 = (short)-10019;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
