#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9707144480197445189ULL;
unsigned long long int var_2 = 6775944287138294889ULL;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)31363;
unsigned int var_10 = 3264060549U;
long long int var_11 = 2252972157313191030LL;
int zero = 0;
long long int var_12 = 5687866530750096672LL;
unsigned int var_13 = 3749585414U;
unsigned short var_14 = (unsigned short)61342;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4068678096577769755LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
