#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3847044451964478584LL;
unsigned long long int var_4 = 5160675481444201596ULL;
unsigned long long int var_5 = 5814648721846894070ULL;
long long int var_7 = 6092142054282996033LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 4158889412202325420ULL;
unsigned int var_13 = 990223558U;
unsigned long long int var_14 = 2510154699075591470ULL;
void init() {
}

void checksum() {
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
