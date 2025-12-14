#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
signed char var_3 = (signed char)62;
signed char var_5 = (signed char)-110;
unsigned char var_7 = (unsigned char)156;
int zero = 0;
unsigned long long int var_11 = 4874424713251868207ULL;
long long int var_12 = 8520360127953519014LL;
long long int var_13 = 7129231253233002362LL;
unsigned long long int var_14 = 17944198809189506784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
