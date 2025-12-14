#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 337086884872897713LL;
long long int var_2 = -1236324817828042591LL;
long long int var_4 = 2937564407187796947LL;
signed char var_5 = (signed char)64;
long long int var_7 = 8915692592921700642LL;
signed char var_8 = (signed char)61;
long long int var_9 = -2844172920878545053LL;
int zero = 0;
long long int var_10 = 3138035277464332297LL;
long long int var_11 = 7272984331304267211LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
